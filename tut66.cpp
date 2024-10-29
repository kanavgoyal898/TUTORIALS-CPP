#include <iostream>

// Class Templates with Default Parameters

template <class T = int>
class ClassName {
    T data1;
    T data2;
};

int main() {
    ClassName<> objectName1;
    ClassName<char> objectName2;
    return 0;
}