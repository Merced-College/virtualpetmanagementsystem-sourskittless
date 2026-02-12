#include "Dog.h"
#include <iostream>

// Default constructor
Dog::Dog() : Pet(), breed("Unknown") {}

// Parameterized constructor
//Dog::Dog(const std::string& name, int age, const std::string& breed) : Pet(name, "Dog", age, 0), breed(breed) {}

// Output
void Dog::printInfo()  {
    std::cout << "Pet Name: " << getName() << std::endl;
    std::cout << "Breed: " << breed << std::endl;
    std::cout << "Age: " << getAge() << std::endl;
}
 
//added per assignment instructions
//makes sound
void Dog::makeSound(){
    std::cout << getName() << " woof woof.\n";
}