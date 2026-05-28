add_library(ds)

target_include_directories(ds 
    PUBLIC "${PROJECT_SOURCE_DIR}/include"
)

target_sources(ds 
PRIVATE
    stack.cpp
    queue.cpp
)