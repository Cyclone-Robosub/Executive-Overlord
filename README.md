### Build/run instructions

```bash

### initialize project
. script/init.sh

### this step should be taken care of by init.sh,
### but it doesn't work and thus needs to be ran manually

cd src/Thrust-Control
git submodule update --init
cd ../..

### run tests
. script/runTests.sh
```bash

### Push code to main when all unit tests pass
### (or at least no new unit tests fail)