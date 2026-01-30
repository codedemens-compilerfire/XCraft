
cmake_minimum_required(VERSION 3.10)
project (XCraft VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(PkgConfig REQUIRED)

pkg_search_module(ENET REQUIRED libenet)
pkg_check_modules(ENET REQUIRED libenet)

add_executable(XCraft
    sourcecode/main.cpp
)

target_include_directories(XCraft, PRIVATE ./sourcecode ./include/)
target_link_libraries(XCraft PRIVATE ${ENET_LIBRARIES} sfml-graphics sfml-window sfml-audio sfml-network sfml-system)