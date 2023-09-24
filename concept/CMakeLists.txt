project(concept_example)
set
(   
    SOURCES
    concetp.cpp
    concept.hpp
)

add_library(${PROJECT_NAME} STATIC ${SPUCES})

set_target_properties
(       
    concept_example
        PROPERTIES
        CXX_STANDARD 20
        CXX_STANDARD_REQUIRED YES
        CXX_EXTENSIONS YES
        C_STANDARD 11
        C_STANDARD_REQUIRED YES
        C_EXTENSIONS YES
)