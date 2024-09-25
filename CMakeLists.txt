cmake_minimum_required(VERSION 3.13.0...3.20)
project(TNCG15)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(glm REQUIRED)

file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "inc/*.h")

add_executable(Raytray ${SOURCES} ${HEADERS})
target_include_directories(Raytray PRIVATE "${CMAKE_SOURCE_DIR}/inc")
target_link_libraries(Raytray PRIVATE glm::glm)
