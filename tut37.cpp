#include <iostream>

// The private members of a class can be inherited but cannot be accessed directly by its derived classes. They can be accessed using public or protected methods of the base class. The default visibility mode in inheritance is private.

class BaseClass {
    int prop1;
    int prop2;
};

class DerivedClass1 : public BaseClass {
    int prop3;
};

class DerivedClass2 : private BaseClass {
    int prop3;
};

class DerivedClass3 : protected BaseClass {
    int prop3;
};

int main() {
    BaseClass c;
    DerivedClass1 c1;
    DerivedClass2 c2;
    DerivedClass3 c3;

    return 0;
}