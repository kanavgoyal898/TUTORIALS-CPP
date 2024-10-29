#include <iostream>

// function overloading

int sum(int a, int b) {
    return a+b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

char sum(char num1, char num2) {
    return num1+num2;
}

int main() {
    std::cout << "Sum of 1, 2    : " << sum(1, 2) << std::endl;
    std::cout << "Sum of 1, 2, 3 : " << sum(1, 2, 3) << std::endl;
    std::cout << "Sum resulting to ASCII-45 : " << sum(22, 23) << std::endl;
    return 0;
}