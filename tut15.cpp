#include <iostream>

void foo();

int sum(int a, int b) {
    return a+b;
}

int main() {
    foo();

    int num1, num2;
    std::cout << "Enter num1: ";
    std::cin >> num1;
    std::cout << "Enter num2: ";
    std::cin >> num2;
    std::cout << "Sum of num1 & num2: " << sum(num1, num2) << std::endl;
    return 0;
}

// function prototyping
void foo() {
    std::cout << "Hello, World!" << std::endl;
}