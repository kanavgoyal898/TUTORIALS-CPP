#include <iostream>

class BaseClass {
    int dataB;
    public:
        BaseClass(int dataB) {
            this->dataB = dataB;
            std::cout << "Base Class Constructor is called." << std::endl;
        }
};

class DerivedClass : public BaseClass {
    int dataD;
    public:
        DerivedClass(int dataB, int dataD) : BaseClass(dataB) {
            this->dataD = dataD;
            std::cout << "Derived Class Constructor is called." << std::endl;
        }
};

int main() {
    DerivedClass d(0, 1);
    return 0;
}