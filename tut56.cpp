#include <iostream>

// Virtual Base Function - Compile Time Polymorphism
// The rules for the virtual functions in C++ are as follows:

// Virtual functions cannot be static.
// 1. A virtual function can be a friend function of another class.
// 2. Virtual functions should be accessed using a pointer or reference of base class type to achieve runtime polymorphism.
// 3. The prototype of virtual functions should be the same in the base as well as the derived class.
// 4. They are always defined in the base class and overridden in a derived class. It is not mandatory for the derived class to override (or re-define the virtual function), in that case, the base class version of the function is used.
// 5. A class may have a virtual destructor but it cannot have a virtual constructor.

class BaseClass {
    public:
        int virtual display() {
            std::cout << "BaseClass function called." << std::endl;
        }
};

class DerivedClass : public BaseClass {
    public:
        int display() {
            std::cout << "DerivedClass function called." << std::endl;
        }
};

int main() {
    DerivedClass obj;
    
    BaseClass *ptr1 = &obj;
    ptr1->display();
    DerivedClass *ptr2 = &obj;
    ptr2->display();

    return 0;
}