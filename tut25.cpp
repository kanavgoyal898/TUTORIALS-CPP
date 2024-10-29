#include <iostream>

// array of objects
class Employee {
    char lvl;
    int id;

    public: void setInfo() {
        std::cout << "Enter Employee Level: ";
        std::cin >> lvl;
        std::cout << "Enter Employee ID: ";
        std::cin >> id; 
    }

    public: void getInfo() {
        std::cout << "Employee Level: " << lvl << " ";
        std::cout << "Employee ID: " << id << std::endl;
    }
};

// objects as arguments
class ComplexNumber {
    public: int a;
    public: int b;

    public: void setData(int x, int y) {
        a = x;
        b = y;
    }

    public: void setDataSum(ComplexNumber c1, ComplexNumber c2) {
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }

} c1, c2, c3;

int main() {
    Employee Emp[5];

    for(int i = 0; i < 5; i++) {
        Emp[i].setInfo();
    }
    for(int i = 0; i < 5; i++) {
        Emp[i].getInfo();
    }

    c1.setData(3, 4);
    c2.setData(4, 3);
    c3.setDataSum(c1, c2);
    std::cout << "Sum of (3 + 4j) and (4 + 3j): " << c3.a << " + " << c3.b << "j";
    return 0;
}