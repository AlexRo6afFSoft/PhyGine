FLAGS = -O2 -std=gnu++1z
SDL = -I/usr/local/include -lSDL2
PhyGine_math = -I./base_math_things
PhyGine_geometry = -I./geometric_objects
PhyGine_drawer = -I./drawer
PhyGine_root = -I.
all:
	clang++ main.cpp -o main.exe $(FLAGS) $(SDL) $(PhyGine_math) $(PhyGine_drawer) $(PhyGine_geometry) $(PhyGine_root)

clean:
	rm *.exe
