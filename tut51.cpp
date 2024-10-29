#include <iostream>

class Complex {
    int real;
    int imag;
    public:
        int setData(int a, int b) {
            real = a;
            imag = b;
        }
        int getData() {
            std::cout << "Re(Z): " << real << std::endl;
            std::cout << "Im(Z): " << imag << std::endl;
        }
};

int main() {

    // static memory pointer
    Complex c;
    Complex* ptr1 = &c;
    (*ptr1).setData(3, 4);
    (*ptr1).getData();
    Complex* ptr2 = &c;
    ptr2->setData(5, 12);
    ptr2->getData();

    // dynamic memory pointer
    Complex* ptrA = new Complex;
    (*ptrA).setData(3, 4);
    (*ptrA).getData();
    delete ptrA;
    Complex* ptrB = new Complex;
    ptrB->setData(5, 12);
    ptrB->getData();
    delete ptrB;
    
    return 0;
}