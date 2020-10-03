.PHONY: all clean test

CMAKE_CACHE_ENTRY := -DCMAKE_BUILD_TYPE=Debug

all:
	mkdir -p ./build
	cd ./build && cmake .. $(CMAKE_CACHE_ENTRY) && cmake --build .

test:
	mkdir -p ./build
	cd ./build && cmake .. $(CMAKE_CACHE_ENTRY) -DWITH_UNITTEST=ON && cmake --build .

clean:
	rm -rf ./build
	rm -rf ./bin
