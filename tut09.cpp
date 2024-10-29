#include <iostream>

int main() {
    // if-else statements:
    if(true) {
        std::cout << "if statement is executed" << std::endl;
    } else {
        std::cout << "else statement is executed" << std::endl;
    }
    if(false) {
        std::cout << "if statement is executed" << std::endl;
    } else {
        std::cout << "else statement is executed" << std::endl;
    }

    // else-if statements
    if(true) {
        std::cout << "if statement is executed" << std::endl;
    } else if(true) {
        std::cout << "else-if statement is executed" << std::endl;
    } else {
        std::cout << "else statement is executed" << std::endl;
    }
    if(true) {
        std::cout << "if statement is executed" << std::endl;
    } else if(false) {
        std::cout << "else-if statement is executed" << std::endl;
    } else {
        std::cout << "else statement is executed" << std::endl;
    }
    if(false) {
        std::cout << "if statement is executed" << std::endl;
    } else if(true) {
        std::cout << "else-if statement is executed" << std::endl;
    } else {
        std::cout << "else statement is executed" << std::endl;
    }
    if(false) {
        std::cout << "if statement is executed" << std::endl;
    } else if(false) {
        std::cout << "else-if statement is executed" << std::endl;
    } else {
        std::cout << "else statement is executed" << std::endl;
    }

    // switch-case statements:
    int booleanA = 0;
    switch(booleanA) {
        case 0: std::cout << "False Statement" << std::endl; break;
        case 1: std::cout << "True Statement" << std::endl; break;
        default: std::cout << "Undefined Statement" << std::endl;
    }
    int booleanB = 1;
    switch(booleanB) {
        case 0: std::cout << "False Statement" << std::endl; break;
        case 1: std::cout << "True Statement" << std::endl; break;
        default: std::cout << "Undefined Statement" << std::endl;
    }
    int booleanC = 2;
    switch(booleanC) {
        case 0: std::cout << "False Statement" << std::endl; break;
        case 1: std::cout << "True Statement" << std::endl; break;
        default: std::cout << "Undefined Statement" << std::endl;
    }
    
    return 0;
}