cmake_minimum_required(VERSION 3.12 LANGUAGES CXX)

project(HW_34_7)

add_subdirectory(concept)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PUBLIC concept_example)

set_target_properties
(   
    HW_34_7
        PROPERTIES
        CXX_STANDARD 20
        CXX_STANDARD_REQUIRED YES
        CXX_EXTENSIONS YES
        C_STANDARD 11
        C_STANDARD_REQUIRED YES
        C_EXTENSIONS YES
)