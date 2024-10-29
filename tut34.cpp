#include <iostream>

// A Copy constructor is an overloaded constructor used to declare and initialize an object from another object. 
// Default Copy constructor: The compiler defines the default copy constructor.
// User Defined constructor: The programmer defines the user-defined constructor.

class Number {
    int n;
    public: Number(int num) {
        n = num;
    }
    public: int getValue() {
        std::cout << "Number: " << n << std::endl;
        return 0;
    }

    // copy constructor
    public: Number(Number &obj) {
        std::cout << "Copy Constructor" << std::endl;
        n = obj.n;
    }
};

int main() {
    Number x(1);
    x.getValue();

    // copy constructors
        Number y(x);
        y.getValue();
        Number z = x;
        z.getValue();

    return 0;
}