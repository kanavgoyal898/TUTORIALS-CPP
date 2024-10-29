#include <iostream>

class Complex {
    int a, b;

    // Constructor in C++ is a special method that is invoked automatically at the time of object creation. It is used to initialize the data members of new objects generally. The constructor in C++ has the same name as the class or structure. Constructor is invoked at the time of object creation. Constructors are mostly declared in the public section of the class though it can be declared in the private section of the class. Constructors do not return values; hence they do not have a return type.

    // constructor declaration
    public: Complex();
};

// constructor definiton
Complex :: Complex() {
    a = 0;
    b = 0;
    std::cout << a << " + " << b << "i" << std::endl;
}

int main() {
    Complex c;
    return 0;
}