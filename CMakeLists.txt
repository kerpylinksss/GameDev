cmake_minimum_required(VERSION 3.2)

project(project1 LANGUAGES CXX)

# Найти SFML
find_package(SFML 2.5 COMPONENTS system window graphics REQUIRED)

# Добавить исполняемый файл
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
add_executable(main ./src/main.cpp)

set(sys "sfml-system")
set(win "sfml-window")
set(gr "sfml-graphics")

# Линковка с SFML
target_link_libraries(main PRIVATE ${sys} ${win} ${gr})

message ("The sfml-system is: ${sys}")
