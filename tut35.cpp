#include <iostream>

// Destructor is an instance member function which is invoked automatically whenever an object is going to be destroyed. Destructor has the same name as their class name preceded by a tilde (~) symbol. It is not possible to define more than one destructor. The destructor is only one way to destroy the object created by constructor. Destructor neither requires any argument nor returns any value. Hence destructor can-not be overloaded. It is automatically called when object goes out of scope.

class ClassName {
    public: ClassName() {
        std::cout << "Constructor Call" << std::endl;
    }
    public: ~ClassName() {
        std::cout << "Destructor Call" << std::endl;
    }
};

int main() {
    ClassName ObjectName;
    return 0;
}