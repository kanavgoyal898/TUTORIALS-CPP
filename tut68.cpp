#include <iostream>

// Member Function Templates
template <class T>
class ClassName {
    public:
    void functionName();
};

template <class T>
void ClassName<T> :: functionName() {
    // function body
}

// Template Function Overloading
template <class T1>
void functionName() {}
template <class T1, class T2>
void functionName() {}
template <class T1, class T2, class T3>
void functionName() {}

int main() {

    return 0;
}