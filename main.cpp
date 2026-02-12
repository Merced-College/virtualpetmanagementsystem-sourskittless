#include <iostream>
#include "Pet.h"

int main() {
    Dog dog1("Rex", "Dog", 3, 6);
    Dog dog2("Sam", "Dog", 2, 4);

    std::cout << "Dog 1 Info:\n";
    dog1.printInfo();

    std::cout << "\nDog 2 Info:\n";
    dog2.printInfo();

    std::cout << "\nComparing pets by name: ";
    int result = dog1.compareTo(dog2);
    if (result < 0) std::cout << dog1.getName() << " comes before " << dog2.getName() << "\n";
    else if (result > 0) std::cout << dog1.getName() << " comes after " << dog2.getName() << "\n";
    else std::cout << "Both pets have the same name.\n";
    

    return 0;
}
