#include <iostream>

// Pointer to Derived Class - Compile Time Polymorphism

class BaseClass {
    public:
        int display() {
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