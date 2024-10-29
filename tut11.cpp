#include <iostream>

int main() {
    // break keyword
    for(int i = 0; i < 11; i++) {
        if(i == 11) {
            break;
        } else {
            std::cout << i << std::endl;
        }
    }
    std::cout << std::endl;


    // continue keyword
    for(int i = 0; i < 11; i++) {
        if(i%2 != 0) {
            continue;
        } else {
            std::cout << i << std::endl;
        }
    }
    for(int i = 0; i < 11; i++) {
        if(i%2 == 0) {
            continue;
        } else {
            std::cout << i << std::endl;
        }
    }

    return 0;
}