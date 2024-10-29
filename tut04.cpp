#include <iostream>

int global = 8;

void foo() {
    int global = 6;
    std::cout << "Value of global in local scope: " << global << "\n";
}

int main() {
    int a = 2;
    int b = 5;
    char c = 'c';
    float pi = 3.14f;
    bool bin = true;

    std::cout << "Value of a: " << a << "\n";
    std::cout << "Value of b: " << b << "\n";
    std::cout << "Value of c: " << c << "\n";
    std::cout << "Value of pi: " << pi << "\n";
    std::cout << "Value of bin: " << bin << "\n";

    // variable scope
    foo();
    std::cout << "Value of global in global scope: " << global << "\n";

    return 0;
}