## Ubuntu install `google test` sources and build binaries

```
sudo apt install libgtest-dev
cd /usr/src/gtest
sudo make
sudo make install
```

## How to

`make` - generate application binary, googletest library(gtest, gmock) and unittest(google test);

`make clean` - clean up generated sources `bin` and `build` folders;

`./bin/model1` - run application;

`./bin/model1_test` - run written tests.
