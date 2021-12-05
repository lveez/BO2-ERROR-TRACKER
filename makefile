SRCFILES := $(wildcard src/*.c src/*/*.c)

all:
	g++ $(SRCFILES) -o./bin/dbg/B2ETcli

release:
	g++ -static -static-libgcc -static-libstdc++ $(SRCFILES) -o./bin/rel/B2ETcli