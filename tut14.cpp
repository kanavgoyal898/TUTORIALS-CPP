#include <iostream>

struct employee {
    char employeeLevel;
    int employeeID;
} ep1, ep2, ep3;

union money {
    short gbp;
    int usd;
    long inr;
} u1, u2, u3;

int main() {
    // typedef
    typedef int k;
    std::cout << "Size of typedef int 'k': " << sizeof(k) << std::endl;

    // structures
    struct employee emp1 = {'A', 1001};
    struct employee emp2 = {'B', 2001};
    struct employee emp3 = {'C', 3001};
    std::cout << "Value of emp1.employeeLevel: " << emp1.employeeLevel << std::endl;
    std::cout << "Value of emp1.ID           : " << emp1.employeeID << std::endl;
    std::cout << "Value of emp2.employeeLevel: " << emp2.employeeLevel << std::endl;
    std::cout << "Value of emp2.ID           : " << emp2.employeeID << std::endl;
    std::cout << "Value of emp3.employeeLevel: " << emp3.employeeLevel << std::endl;
    std::cout << "Value of emp3.ID           : " << emp3.employeeID << std::endl;
    std::cout << std::endl;

    // unions
    union money bankBalance;
    bankBalance.gbp = 100;      // union contains 100 GBP ~ 10000 INR
    bankBalance.usd = 100;      // union contains 100 USD ~  8000 INR
    bankBalance.inr = 100;      // union contains 100 INR ~   100 INR

    // enumerations
    enum Meal {breakfast, lunch, dinner};
    std::cout << "Value of breakfast: " << breakfast << std::endl;  
    std::cout << "Value of lunch    : " << lunch << std::endl;  
    std::cout << "Value of dinner   : " << dinner << std::endl;
    
    return 0;
}