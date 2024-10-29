#include <iostream>
#include <iomanip>

int main() {
    // pointers
    int a = 3;
    int* b = &a;
    std::cout << "Value of a  : " << std::setw(10) << a << std::endl;
    std::cout << "Value of &a : " << std::setw(10) << &a << std::endl;
    std::cout << "Value of b  : " << std::setw(10) << b << std::endl;
    std::cout << "Value of *b : " << std::setw(10) << *b << std::endl;
    std::cout << std::endl;

    // pointer-to-pointer
    int x = 3;
    int* y = &x;
    int** z = &y;
    std::cout << "Value of x   : " << std::setw(10) << x << std::endl;
    std::cout << "Value of &x  : " << std::setw(10) << &x << std::endl;
    std::cout << "Value of y   : " << std::setw(10) << y << std::endl;
    std::cout << "Value of *y  : " << std::setw(10) << *y << std::endl;
    std::cout << "Value of &y  : " << std::setw(10) << &y << std::endl;
    std::cout << "Value of z   : " << std::setw(10) << z << std::endl;
    std::cout << "Value of *z  : " << std::setw(10) << *z << std::endl;
    std::cout << "Value of **z : " << std::setw(10) << **z << std::endl;
    std::cout << std::endl;

    return 0;
}