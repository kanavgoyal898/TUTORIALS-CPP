#include <iostream>

// fibonacci sequence a_n = a_(n-2) + a_(n-1)
int fibonacci(int n) {
    if(n <= 0) {
        return 0;
    } else if(n == 1) {
        return 1;
    } else {
        return (fibonacci(n-2) + fibonacci(n-1));
    }
}

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;
    std::cout << "Using Recursions, " << n << "th position of the Fibonacci Sequence contains " << fibonacci(n) << std::endl;
    return 0;
}