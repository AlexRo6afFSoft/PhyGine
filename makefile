FLAGS = -O2 -std=gnu++1z
SDL = -I/usr/local/include -lSDL2
PhyGine = -I./include

all:  build run

clean:
	rm *.exe

build:
	clang++ main.cpp -o main.exe $(FLAGS) $(SDL) $(PhyGine)

run:
	./main.exe

