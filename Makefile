.PHONY: all clean

all:
	mkdir -p ./build
	cd ./build && cmake .. -DCMAKE_BUILD_TYPE=Debug && cmake --build .

clean:
	rm -rf ./build
