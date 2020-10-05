## Ubuntu >= 18.04 install `google test` sources and build binaries

```
sudo apt install libgtest-dev
cd /usr/src/gtest
sudo make
sudo make install
```

Currecnty there is no way to install `gmock` library


## How to

`make` - generate application binary, googletest library(gtest, gmock) and unittest(google test);

`make clean` - clean up generated sources `bin` and `build` folders;

`./bin/model1` - run application;

`./bin/model1_test` - run written tests.
