#include <iostream>

void swapWithoutPointers(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swapUsingPointers(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swapUsingReferenceVariables(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 2;
    int num2 = 5;
    std::cout << "Value of num1 (before swapping) : " << num1 << std::endl; 
    std::cout << "Value of num2 (before swapping) : " << num2 << std::endl; 

    // call-by-value

    swapWithoutPointers(num1, num2);
    std::cout << "Value of num1 (after swapping without pointers) : " << num1 << std::endl; 
    std::cout << "Value of num2 (after swapping without pointers) : " << num2 << std::endl; 

    // call-by-reference

    swapUsingPointers(&num1, &num2);
    std::cout << "Value of num1 (after swapping using pointers) : " << num1 << std::endl; 
    std::cout << "Value of num2 (after swapping using pointers) : " << num2 << std::endl;
    
    swapUsingReferenceVariables(num1, num2);
    std::cout << "Value of num1 (after swapping using reference variables) : " << num1 << std::endl; 
    std::cout << "Value of num2 (after swapping using reference variables) : " << num2 << std::endl;
    
    return 0;
}