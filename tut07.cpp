#include <iostream>

int x = 0;

int main() {
    int x = 1;
    std::cout << "Local Value: " << x << std::endl;
    std::cout << "Global Value: " << ::x << std::endl;

    // reference variables
    float a = 1.23;
    float &b = a;
    std::cout << "Value of a and b is " << a << " and " << b << " respectively." << std::endl;

    return 0;
}