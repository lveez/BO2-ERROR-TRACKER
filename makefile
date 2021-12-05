SRCFILES := $(wildcard src/*.cpp src/*/*.cpp)

all:
	g++ $(SRCFILES) -o./bin/B2ETcli

release:
	g++ -static -static-libgcc -static-libstdc++ $(SRCFILES) -o./bin/B2ETcli