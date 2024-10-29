#include <iostream>

class ClassName {
    private: 
        int a, b, c;
        
    public: 
        int d, e;

        int setData(int _a, int _b, int _c);

        int getData() {
            std::cout << "a: " << a << std::endl;
            std::cout << "b: " << b << std::endl;
            std::cout << "c: " << c << std::endl;
            std::cout << "d: " << d << std::endl;
            std::cout << "e: " << e << std::endl;
            return 0;
        }

} ObjectName1, ObjectName2, ObjectName3;

int ClassName :: setData(int _a, int _b, int _c) {
    a = _a;
    b = _b;
    c = _c;
    return 0;
} 


int main() {
    ClassName ObjectName;

    // ObjectName.a = 1;    inaccessible member
    // ObjectName.b = 2;    inaccessible member
    // ObjectName.c = 3;    inaccessible member
    ObjectName.setData(1, 2, 3);
    ObjectName.d = 4;
    ObjectName.e = 5;
    ObjectName.getData();
    return 0;
}