#include <iostream>

int main() {
    // arithmetic operators
    int a = 5;
    int b = 2;
    std::cout << "Value of a: " << a << std::endl;  
    std::cout << "Value of b: " << b << std::endl;  
    std::cout << "Value of a + b: " << a+b << std::endl;
    std::cout << "Value of a - b: " << a-b << std::endl;
    std::cout << "Value of a * b: " << a*b << std::endl;
    std::cout << "Value of a / b: " << a/b << std::endl;
    std::cout << "Value of a % b: " << a%b << std::endl;
    std::cout << std::endl;

    // increment-decrement operators:
    int x = 1;
    std::cout << "Value of x (initial): " << x << std::endl;
    std::cout << "Value of ++x: " << ++x << std::endl;
    std::cout << "Value of --x: " << --x << std::endl;
    std::cout << "Value of x++: " << x++ << std::endl;
    std::cout << "Value of x--: " << x-- << std::endl;
    std::cout << "Value of x (final): " << x << std::endl;
    std::cout << std::endl;

    // assignment operators:
    int var = 0;

    // logical operators:
    std::cout << "Value of (0 && 0): " << (0&&0) << std::endl;
    std::cout << "Value of (0 && 1): " << (0&&1) << std::endl;
    std::cout << "Value of (1 && 0): " << (1&&0) << std::endl;
    std::cout << "Value of (1 && 1): " << (1&&1) << std::endl;
    std::cout << "Value of (0 || 0): " << (0||0) << std::endl;
    std::cout << "Value of (0 || 1): " << (0||1) << std::endl;
    std::cout << "Value of (1 || 0): " << (1||0) << std::endl;
    std::cout << "Value of (1 || 1): " << (1||1) << std::endl;
    std::cout << "Value of !0: " << (!0) << std::endl;
    std::cout << "Value of !1: " << (!1) << std::endl;
    std::cout << std::endl;

    // relational operators:
    int m = 0;
    int n = 1;
    std::cout << "Value of m: " << m << std::endl;
    std::cout << "Value of n: " << n << std::endl;
    std::cout << "Value of m == n: " << (m==n) << std::endl;
    std::cout << "Value of m != n: " << (m!=n) << std::endl;
    std::cout << "Value of m < n: " << (m<n) << std::endl;
    std::cout << "Value of m > n: " << (m>n) << std::endl;
    std::cout << "Value of m <= n: " << (m<=n) << std::endl;
    std::cout << "Value of m >= n: " << (m>=n) << std::endl;
    std::cout << std::endl;
    return 0;
}
