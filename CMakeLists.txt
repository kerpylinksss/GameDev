cmake_minimum_required(VERSION 3.2)

project(project1 LANGUAGES CXX)

# Найти SFML
find_package(SFML 2.5 COMPONENTS system window graphics REQUIRED)

# Добавить исполняемый файл
add_executable(main ./src/main.cpp)

set(sys "sfml-system")

# Линковка с SFML
target_link_libraries(main PRIVATE ${sys} sfml-window sfml-graphics)

message ("The sfml-system is: ${sys}")
