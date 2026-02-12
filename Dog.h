#ifndef DOG_H
#define DOG_H

#include <string>
#include "Pet.h"

class Dog : public Pet {
private:
    std::string breed;

public:
    // Constructors
    Dog();
    Dog(const std::string& name, int age, const std::string& breed) : Pet(name, "Dog", age, 0), breed(breed) {}
;

    // Accessors (Getters)
    std::string getName() const;
    std::string getSpecies() const;
    std::string getBreed() const;
    int getAge() const;
   

    // Mutators (Setters)
    void setName(const std::string& name);
    void setSpecies(const std::string& species);
    void setBreed(const std::string& breed);
    void setAge(int age);
    void setHungerLevel(int level);

    // CompareTo
    int compareTo(const Dog& other) const; // Returns -1, 0, or 1 based on name comparison

    // Output Function
    void printInfo() ;
    void makeSound() ;
};

#endif
