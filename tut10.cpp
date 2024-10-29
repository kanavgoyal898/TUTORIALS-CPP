#include <iostream>

int main() {
    // while loop
    int i = 1;
    while(i <= 10) {
        std::cout << i++ << " ";
    }
    std::cout << std::endl;

    // do-while loop
    int j = 1;
    do {
        std::cout << j++ << " ";
    } while(j <= 10);
    std::cout << std::endl;

    // for loop
    for(int i = 1; i <= 10; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
 
    return 0;
}