#include <iostream>

int main() {
    // arrays
    int marks[6] = {45, 55, 65, 75, 85, 95};
    std::cout << "Value of marks[0] : " << marks[0] << std::endl;
    std::cout << "Value of marks[1] : " << marks[1] << std::endl;
    std::cout << "Value of marks[2] : " << marks[2] << std::endl;
    std::cout << "Value of marks[3] : " << marks[3] << std::endl;
    std::cout << "Value of marks[4] : " << marks[4] << std::endl;
    std::cout << "Value of marks[5] : " << marks[5] << std::endl;
    std::cout << std::endl;

    char grades[] = {'E', 'D', 'C', 'B', 'A', 'S'};
    std::cout << "Value of 0[grades]: " << 0[grades] << std::endl;
    std::cout << "Value of 1[grades]: " << 1[grades] << std::endl;
    std::cout << "Value of 2[grades]: " << 2[grades] << std::endl;
    std::cout << "Value of 3[grades]: " << 3[grades] << std::endl;
    std::cout << "Value of 4[grades]: " << 4[grades] << std::endl;
    std::cout << "Value of 5[grades]: " << 5[grades] << std::endl;
    std::cout << std::endl;

    // pointer-to-array:
    int arr[] = {0, 1, 2, 3, 4, 5};
    int* ptr = arr;

    std::cout << "Value of &arr[0]: " << &arr[0] << std::endl;
    std::cout << "Value of &arr[1]: " << &arr[1] << std::endl;
    std::cout << "Value of &arr[2]: " << &arr[2] << std::endl;
    std::cout << "Value of &arr[3]: " << &arr[3] << std::endl;
    std::cout << "Value of &arr[4]: " << &arr[4] << std::endl;
    std::cout << "Value of &arr[5]: " << &arr[5] << std::endl;
    std::cout << "Value of (arr + 0): " << (arr + 0) << std::endl;
    std::cout << "Value of (arr + 1): " << (arr + 1) << std::endl;
    std::cout << "Value of (arr + 2): " << (arr + 2) << std::endl;
    std::cout << "Value of (arr + 3): " << (arr + 3) << std::endl;
    std::cout << "Value of (arr + 4): " << (arr + 4) << std::endl;
    std::cout << "Value of (arr + 5): " << (arr + 5) << std::endl;
    std::cout << "Value of &ptr[0]: " << &ptr[0] << std::endl;
    std::cout << "Value of &ptr[1]: " << &ptr[1] << std::endl;
    std::cout << "Value of &ptr[2]: " << &ptr[2] << std::endl;
    std::cout << "Value of &ptr[3]: " << &ptr[3] << std::endl;
    std::cout << "Value of &ptr[4]: " << &ptr[4] << std::endl;
    std::cout << "Value of &ptr[5]: " << &ptr[5] << std::endl;
    std::cout << "Value of (ptr + 0): " << (ptr + 0) << std::endl;
    std::cout << "Value of (ptr + 1): " << (ptr + 1) << std::endl;
    std::cout << "Value of (ptr + 2): " << (ptr + 2) << std::endl;
    std::cout << "Value of (ptr + 3): " << (ptr + 3) << std::endl;
    std::cout << "Value of (ptr + 4): " << (ptr + 4) << std::endl;
    std::cout << "Value of (ptr + 5): " << (ptr + 5) << std::endl;
    std::cout << std::endl;

    std::cout << "Value of arr[0]: " << arr[0] << std::endl;
    std::cout << "Value of arr[1]: " << arr[1] << std::endl;
    std::cout << "Value of arr[2]: " << arr[2] << std::endl;
    std::cout << "Value of arr[3]: " << arr[3] << std::endl;
    std::cout << "Value of arr[4]: " << arr[4] << std::endl;
    std::cout << "Value of arr[5]: " << arr[5] << std::endl;
    std::cout << "Value of *(arr + 0): " << *(arr + 0) << std::endl;
    std::cout << "Value of *(arr + 1): " << *(arr + 1) << std::endl;
    std::cout << "Value of *(arr + 2): " << *(arr + 2) << std::endl;
    std::cout << "Value of *(arr + 3): " << *(arr + 3) << std::endl;
    std::cout << "Value of *(arr + 4): " << *(arr + 4) << std::endl;
    std::cout << "Value of *(arr + 5): " << *(arr + 5) << std::endl;
    std::cout << "Value of ptr[0]: " << ptr[0] << std::endl;
    std::cout << "Value of ptr[1]: " << ptr[1] << std::endl;
    std::cout << "Value of ptr[2]: " << ptr[2] << std::endl;
    std::cout << "Value of ptr[3]: " << ptr[3] << std::endl;
    std::cout << "Value of ptr[4]: " << ptr[4] << std::endl;
    std::cout << "Value of ptr[5]: " << ptr[5] << std::endl;
    std::cout << "Value of *(ptr + 0): " << *(ptr + 0) << std::endl;
    std::cout << "Value of *(ptr + 1): " << *(ptr + 1) << std::endl;
    std::cout << "Value of *(ptr + 2): " << *(ptr + 2) << std::endl;
    std::cout << "Value of *(ptr + 3): " << *(ptr + 3) << std::endl;
    std::cout << "Value of *(ptr + 4): " << *(ptr + 4) << std::endl;
    std::cout << "Value of *(ptr + 5): " << *(ptr + 5) << std::endl;
    std::cout << std::endl;

    // for-each loop
    
    int array[5];
    std::cout << "Elements (forEach Loop): ";
    for(int &x: array) {
        std::cin >> x;
    }
    std::cout << std::endl;

    std::cout << "Elements (forEach Loop): ";
    for(int x: array) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}