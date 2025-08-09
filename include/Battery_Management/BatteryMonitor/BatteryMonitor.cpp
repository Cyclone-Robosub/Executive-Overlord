#include "BatteryMonitor.hpp"
#include <chrono>
#include <functional>
#include <memory>
#include <thread>
#define DANGERSOCLEVEL 5

void BatteryMonitor::SetupADCConnection() {}
void BatteryMonitor::StartupROS()
{
  callbackBattery = this->create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);

  auto VoltageOptions = rclcpp::SubscriptionOptions();
  VoltageOptions.callback_group = callbackBattery;

  auto CurrentOptions = rclcpp::SubscriptionOptions();
  CurrentOptions.callback_group = callbackBattery;

  CurrentChargeSub = this->create_subscription<std_msgs::msg::Float64>(
      "currentReadingTopic", rclcpp::QoS(5),
      std::bind(&BatteryMonitor::getCurrent, this, std::placeholders::_1), CurrentOptions);
  CurrentVoltSub = this->create_subscription<std_msgs::msg::Float64>(
      "voltageReadingTopic", rclcpp::QoS(5),
      std::bind(&BatteryMonitor::getVolt, this, std::placeholders::_1), VoltageOptions);
  // Callback CurrentCharge.
  SOCPublisher = this->create_publisher<std_msgs::msg::Float64>("SOCTopic", 10);
  SOCINTPublisher =
      this->create_publisher<std_msgs::msg::Bool>("SOCIntTopic", 10);
}
///@brief: Conditional Waiting for Current Volt and Current Readings.
void BatteryMonitor::Startup()
{
  timeInital = std::chrono::steady_clock::now();
  while (!voltReceived)
  {
    std::this_thread::sleep_for(std::chrono::milliseconds(80));
  }
  std::cout << "something : " << CurrentVolt.value() << std::endl;
  previousSOC = ((CurrentVolt.value() - MINVOLT) / (MAXVOLT - MINVOLT)) * 100;
  // This function also generates INT for the SOCPublisherINT. If the call to
  // this function is removed, then make sure to replace with some way of
  // checking for INT of SOC.
  std::cout << "starting SOC " << previousSOC << std::endl;
  SOC_RealTime_callback();
  // StartupSOC using Voltage at a single time point
}

/// @brief Step Function that also generates SOC INT.
double BatteryMonitor::CalcSOC()
{
  double resultingSOC;
  //  wait and set value for current value and Time Final.
  // get READING;
  timeFinal = std::chrono::steady_clock::now();
  auto deltaTime =
      std::chrono::duration<double>(timeFinal - timeInital).count();
  resultingSOC =
      previousSOC - (CurrentCurrent.value() / currentRating) * (deltaTime);

  // Setup for next Reading of SOC
  previousSOC = resultingSOC;
  timeInital = timeFinal;

  if (resultingSOC <= DANGERSOCLEVEL)
  {
    auto msg = std::make_unique<std_msgs::msg::Bool>();
    msg->data = true;
    SOCINTPublisher->publish(std::move(msg));
  }
  return resultingSOC;
}
/// @brief Callback ROS2 topic function
void BatteryMonitor::getVolt(const std_msgs::msg::Float64::SharedPtr msg)
{
  CurrentVolt = static_cast<double>(msg->data);
  voltReceived = true;
}
/// @brief Callback ROS2 topic function.
void BatteryMonitor::getCurrent(const std_msgs::msg::Float64::SharedPtr msg)
{
  CurrentCurrent = static_cast<double>(msg->data);
}
void BatteryMonitor::SOC_RealTime_callback()
{
  while(KeepGoing.load()){
    auto start_time = std::chrono::steady_clock::now();
    auto predicted_time = start_time + std::chrono::milliseconds(100);
    auto msg = std::make_unique<std_msgs::msg::Float64>();
    msg->data = static_cast<_Float64>(CalcSOC());
    SOCPublisher->publish(std::move(msg));
    std::this_thread::sleep_until(predicted_time);
  }
}
void BatteryMonitor::Shutdown(){
  KeepGoing = false;
}