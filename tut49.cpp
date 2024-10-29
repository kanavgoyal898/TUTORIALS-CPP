#include <iostream>

// initialization list in C++
class Class {
    int a;
    int b;

    public:
        Class(int i) : a(i), b(a) {
            std::cout << "Value of a: " << a << std::endl;
            std::cout << "Value of b: " << b << std::endl;
        }
        Class(int i, int j) : a(i), b(j) {
            std::cout << "Value of a: " << a << std::endl;
            std::cout << "Value of b: " << b << std::endl;
        }
};
int main() {
    Class c1(0);
    Class c2(1, 2);
    return 0;
}