#include <iostream>
#include <iomanip>

int main() {
    // manipulators in C++: 
    std::cout << std::setw(5) << 0 << std::endl;
    std::cout << std::setw(5) << 12 << std::endl;
    std::cout << std::setw(5) << 345 << std::endl;
    std::cout << std::setw(5) << 6789 << std::endl;
    
    return 0;
}