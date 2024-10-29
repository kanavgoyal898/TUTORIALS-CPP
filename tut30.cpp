#include <iostream>

class Complex {
    int a, b;

    // function overloading

    public: Complex() {
        a = 0;
        b = 0;
        std::cout << a << " + " << b << "i" << std::endl;
    }

    public: Complex(int rp, int ip) {
        a = rp;
        b = ip;
        std::cout << a << " + " << b << "i" << std::endl;
    }
};

int main() {
    // default constructors
    Complex c;

    // parameterized constructors
        // implicit call
    Complex c1(1, 1); 
        // explicit call
    Complex c2 = Complex(2, 2); 

    return 0;
}