## Ubuntu install `google test` sources and build binaries

```
sudo apt install libgtest-dev
cd /usr/src/gtest
sudo cmake .
sudo make
sudo make install
```

## How to

`make` - generate application binary

`make test` - generate application binary and unitset(google test based)

`make clean` - clean up generated sources `bin` and `build` foulders
