cmake_minimum_required(VERSION 3.23)

project(ds_algos)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(ds)

add_executable(ds_algos)

target_sources(ds_algos 
    PRIVATE
        main.cpp
)

target_link_libraries(ds_algos
PRIVATE
    ds
)

