cmake_minimum_required (VERSION 3.5)
project (PhyGine)

include_directories(
		.
		./include
)

set(CMAKE_C_FLAGS_INIT "-stg=gnu11")
set(CMAKE_CXX_FLAGS_INIT "-std=gnu++1z")
