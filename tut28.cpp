#include <iostream>

// forward declarations
class X;
class Y;

class X {
    int data;
    public: void setValue(int d) {
        data = d;
    }
    public: void getValue() {
        std::cout << " x.data = " << data << std::endl; 
    }

    friend int logicalOperator1(X, Y);
    friend int logicalOperator2(X, Y);
    friend int swap(X &, Y &);
} x;

class Y {
    int data;
    public: void setValue(int d) {
        data = d;
    }
    public: void getValue() {
        std::cout << " y.data = " << data << std::endl; 
    }

    friend int logicalOperator1(X, Y);
    friend int logicalOperator2(X, Y);
    friend int swap(X &, Y &);
} y;

int logicalOperator1(X o1, Y o2) {
    std::cout << "Value of 0 && 0: " << ((o1.data) && (o1.data)) << std::endl;
    std::cout << "Value of 0 && 1: " << ((o1.data) && (o2.data)) << std::endl;
    std::cout << "Value of 1 && 0: " << ((o2.data) && (o1.data)) << std::endl;
    std::cout << "Value of 1 && 1: " << ((o2.data) && (o2.data)) << std::endl;
    std::cout << "Value of 0 || 0: " << ((o1.data) || (o1.data)) << std::endl;
    std::cout << "Value of 0 || 1: " << ((o1.data) || (o2.data)) << std::endl;
    std::cout << "Value of 1 || 0: " << ((o2.data) || (o1.data)) << std::endl;
    std::cout << "Value of 1 || 1: " << ((o2.data) || (o2.data)) << std::endl;
    return 0;
}
int logicalOperator2(X o1, Y o2) {
    std::cout << "Value of 1 && 1: " << ((o1.data) && (o1.data)) << std::endl;
    std::cout << "Value of 1 && 0: " << ((o1.data) && (o2.data)) << std::endl;
    std::cout << "Value of 0 && 1: " << ((o2.data) && (o1.data)) << std::endl;
    std::cout << "Value of 0 && 0: " << ((o2.data) && (o2.data)) << std::endl;
    std::cout << "Value of 1 || 1: " << ((o1.data) || (o1.data)) << std::endl;
    std::cout << "Value of 1 || 0: " << ((o1.data) || (o2.data)) << std::endl;
    std::cout << "Value of 0 || 1: " << ((o2.data) || (o1.data)) << std::endl;
    std::cout << "Value of 0 || 0: " << ((o2.data) || (o2.data)) << std::endl;
    return 0;
}

int swap(X & _x, Y & _y) {
    int temp;
    temp = _x.data;
    _x.data = _y.data;
    _y.data = temp;
    return 0;
}

int main() {
    x.setValue(0);
    y.setValue(1);

    std::cout << "Before Swapping: " << std::endl;
    x.getValue();
    y.getValue();
    logicalOperator1(x, y);

    // using reference variables
    swap(x, y);

    std::cout << "After Swapping: " << std::endl;
    x.getValue();
    y.getValue();
    logicalOperator2(x, y);

    return 0;
}