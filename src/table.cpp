#ifndef TABLE_CPP
#define TABLE_CPP
#include <iostream>
#include <string>
#include <exception>
class Element
{
public:
    std::string name;
    double atomic_mass;
    double atomic_number;
    double valency;
    int nox;

    Element(std::string newName = "empty", double atomic_mass = 0, int atomic_number = 0)
    {
        if (newName == "empty" || atomic_mass == 0 || atomic_mass == 0)
        {
            std::cerr << "ElementConstructor():You have to pass a argument to create a new element." << std::endl;
            std::exit(EXIT_FAILURE);
        }

        this->name = newName;
        this->atomic_mass = atomic_mass;
        this->atomic_number = atomic_number;
    };
};
#endif