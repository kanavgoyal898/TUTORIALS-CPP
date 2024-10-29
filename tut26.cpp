#include <iostream>

// Characteristics of a Friend function:
// --> The function is not in the scope of the class to which it has been declared as a friend.
// --> It cannot be called using the object as it is not in the scope of that class.
// --> It can be invoked like a normal function without using the object.
// --> It cannot access the member names directly and has to use an object name and dot membership operator with the member name.
// --> It can be declared either in the private or the public part.

class ComplexNumber {
    int a, b;

    friend ComplexNumber sum(ComplexNumber o1, ComplexNumber o2);
    public: void setNumber(int _a, int _b) {
        a = _a;
        b = _b;
    }
    public: void getNumber() {
        std::cout << "Complex Number: " << a << " + " << b << "i" << std::endl;
    }
} c1, c2;

// friend function
ComplexNumber sum(ComplexNumber o1, ComplexNumber o2) {
    ComplexNumber o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    o3.getNumber();
    return o3;
}

int main() {
    c1.setNumber(3, 4);
    c2.setNumber(4, 3);
    c1.getNumber();
    c2.getNumber();

    // friend function
    sum(c1, c2);
    return 0;
}