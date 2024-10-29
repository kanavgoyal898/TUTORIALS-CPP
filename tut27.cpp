#include <iostream>

// top-to-bottom: forward class declarations
class ComplexNumber;
class Sum {
    // top-to-bottom: forward function declarations
    public: int addRealPart(ComplexNumber c1, ComplexNumber c2);
    public: int addImagPart(ComplexNumber c1, ComplexNumber c2);
    public: int getComplexNumber(int rp, int ip);
} s;
class Prod {
    // top-to-bottom: forward function declarations
    public: int prodRealPart(ComplexNumber c1, ComplexNumber c2);
    public: int prodImagPart(ComplexNumber c1, ComplexNumber c2);
    public: int getComplexNumber(int rp, int ip);
} p;

class ComplexNumber {
    int a, b;

    // member friend functions
    friend int Sum :: addRealPart(ComplexNumber c1, ComplexNumber c2);
    friend int Sum :: addImagPart(ComplexNumber c1, ComplexNumber c2);
    friend int Sum :: getComplexNumber(int rp, int ip);

    // friend class functions
    friend class Prod;

    public: void setNumber(int _a, int _b) {
        a = _a;
        b = _b;
    }
    public: void getNumber() {
        std::cout << "Complex Number: " << a << " + " << b << "i" << std::endl;
    }
} c1, c2;

int Sum :: addRealPart(ComplexNumber c1, ComplexNumber c2) {
    return (c1.a + c2.a);
}
int Sum :: addImagPart(ComplexNumber c1, ComplexNumber c2) {
    return (c1.b + c2.b);
}
int Sum :: getComplexNumber(int rp, int ip) {
    std::cout << "Complex Number: " << s.addRealPart(c1, c2) << " + " << s.addImagPart(c1, c2) << "i" << std::endl;
    return 0;
}

int Prod :: prodRealPart(ComplexNumber c1, ComplexNumber c2) {
    return ((c1.a * c2.a) - (c1.b * c2.b));
}
int Prod :: prodImagPart(ComplexNumber c1, ComplexNumber c2) {
    return ((c1.a * c2.b) + (c1.b * c2.a));
}
int Prod :: getComplexNumber(int rp, int ip) {
    std::cout << "Complex Number: " << p.prodRealPart(c1, c2) << " + " << p.prodImagPart(c1, c2) << "i" << std::endl;
}

int main() {
    c1.setNumber(3, 4);
    c2.setNumber(4, 3);
    c1.getNumber();
    c2.getNumber();

    std::cout << "Addition of (3+4i) and (4+3i)" << std::endl;
    s.getComplexNumber(s.addRealPart(c1, c2), s.addImagPart(c1, c2));
    std::cout << "Product of (3+4i) and (4+3i)" << std::endl;
    p.getComplexNumber(p.prodRealPart(c1, c2), p.prodImagPart(c1, c2));
    return 0;
}