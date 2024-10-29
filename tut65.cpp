#include <iostream>

// Class Templates with Multiple Parameters
template <class T1, class T2, class T3, class T4, class T5>
class ClassName {
    T1 data1;
    T2 data2;
    T3 data3;
    T4 data4;
    T5 data5;
};

int main() {
    ClassName<int, float, double, char, bool> objectName;
    return 0;
}