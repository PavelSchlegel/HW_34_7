#ifndef CONCEPT
#define CONCEPT

#include <concepts>
#include <string>

template <typename T>
concept d_virtual = requires (T x) { ! std::has_virtual_destructor<T>::value;};

template <typename T>
concept ComplexConcept = requires (T x)
{
    {x.hash()} -> std::convertible_to<long>;
    {x.toString()} -> std::same_as<std::string>;
    {d_virtual<T>};
};

class Test
{
    unsigned int _hash = 100;
    std::string _string {"String"};
public:
    unsigned int hash() {
        return _hash;
    }

    std::string toString() {
        return _string;
    }
};

#endif //CONCEPT