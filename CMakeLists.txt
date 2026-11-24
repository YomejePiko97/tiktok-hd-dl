cmake_minimum_required(VERSION 3.16)
project(tiktok-hd-dl CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(tiktokhddl
    src/main.cpp
    src/fetcher.cpp
    src/cleaner.cpp
    src/queue.cpp
)

target_include_directories(tiktokhddl PRIVATE include)

if(WIN32)
    target_link_libraries(tiktokhddl PRIVATE userenv)
endif()
