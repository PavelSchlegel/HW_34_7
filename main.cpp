#include "concept/concept.hpp"
#include <array> // for example
#include <iostream>

int main () {
    Test test;
    std::array arr {1, 2};
    std::cout << std::boolalpha << ComplexConcept<Test> << std::endl;                   //true
    std::cout << std::boolalpha << ComplexConcept<std::array<int, 2>> << std::endl;     //false

    return 0;
}