#include "Animal.h"
#include "Dog.h"
#include <memory>


int main()
{
    std::unique_ptr<Animal> animal = std::make_unique<Dog>();
    animal->callOut();

    std::unique_ptr<Dog> dog = std::make_unique<Dog>();
    dog->callOut();

    Animal plainAnimal;
    plainAnimal.callOut();

    return 0;
}
