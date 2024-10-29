#include <iostream>
#include <algorithm>

int main() {
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    std::cout << "Before Sorting: \n"; 
    for(int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::sort(arr, arr + 10);
    std::cout << "After Sorting: \n"; 
    for(int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    } 
    std::cout << std::endl;

    return 0;
}