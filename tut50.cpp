#include <iostream>

// Dynamic Memory Allocation & De-allocation

int main() {
    int *ptr = new int(100);

    std::cout << "Value of  ptr: " <<  ptr << std::endl;
    std::cout << "Value of *ptr: " << *ptr << std::endl;
    std::cout << "Size of   ptr: " << sizeof(ptr) << std::endl;
    std::cout << "Size of  *ptr: " << sizeof(*ptr) << std::endl;
    delete ptr;

    int *arr = new int[100];
    for(int i = 0; i < 100; i++) {
        arr[i] = i;
        std::cout << "arr[i] for i = " << i << " is " << arr[i] << std::endl;
    }

    std::cout << "Value of  arr: " <<  arr << std::endl;
    std::cout << "Value of *arr: " << *arr << std::endl;
    std::cout << "Size of   arr: " << sizeof(*arr) << std::endl;
    std::cout << "Size of  *arr: " << sizeof(*arr) << std::endl;
    delete[] arr;

    return 0;
}