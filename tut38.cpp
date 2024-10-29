#include <iostream>

// single inheritance
class BaseClass {
    private:
        int data1;
        int data2;

    public:
        int setData(int a, int b);
        int getData1();
        int getData2();
};

int BaseClass::setData(int a, int b) {
    this->data1 = a;
    this->data2 = b;
    return 0;
}

int BaseClass::getData1() {
    return this->data1;
}

int BaseClass::getData2() {
    return this->data2;
}

class DerivedClass : public BaseClass {
    private:
        int data3;

    public:
        int setData3();
        int getData3();
};

int DerivedClass::setData3() {
    data3 = getData1() * getData2();
    return data3;
}

int DerivedClass::getData3() {
    return this->data3;
}

int main() {
    DerivedClass d;
    d.setData(3, 4);
    std::cout << "data3: " <<  d.setData3() << std::endl;
    return 0;
}