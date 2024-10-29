#include <iostream>

// Ambiguity Resolution

class BaseClassA {
    public:
    int greet() {
        std::cout << "Hello!" << std::endl;
        return 0;
    }
};

class BaseClassB {
    public:
    int greet() {
        std::cout << "Hola!" << std::endl;
        return 0;
    }
};

class DerivedClass : public BaseClassA, public BaseClassB {
    public:
        int greet() {
            BaseClassA::greet();
        }
        int greetD() {
            std::cout << "Namaste!" << std::endl;
            return 0;
        }
};

int main() {
    BaseClassA b1;
    b1.greet();
    BaseClassB b2;
    b2.greet();
    DerivedClass d;
    d.greetD();
    
    d.greet();
    return 0;
}


