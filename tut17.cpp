#include <iostream>
#include <iomanip>

inline int product(int a, int b) {
    return a*b;
}

// default arguments
int amount(int principal, float rate = 1.75, float time = 1.00f) {
    return (principal*rate*time);
}

int main() {
    int n;
    std::cout << "Table for ";
    std::cin >> n;
    for(int i = 1; i <= 10; i++) {
        std::cout << n << " x " << std::setw(2) << i << " = " << std::setw(3) << product(n, i) << std::endl;
    }

    // calculating simple interest
    int principal;
    std::cout << "Enter your Deposit Amount: ";
    std::cin >> principal;
    std::cout << "Default Amount at Nominal Simple Interest: " << amount(principal) << std::endl;

    return 0;
}