#include <iostream>

class ClassName {
    int prop1;
    int prop2;
    int prop3;

    public:
        int setData(int a, int b, int c) {
            prop1 = a;
            prop2 = b;
            prop3 = c;
        }
        int getData() {
            std::cout << "prop1: " << prop1 << std::endl;
            std::cout << "prop2: " << prop2 << std::endl;
            std::cout << "prop3: " << prop3 << std::endl;
        }
};

int main() {
    // array-of-objects using pointers

    ClassName* ptr = new ClassName[3];
    (ptr+0)->setData(1, 2, 3);
    (ptr+1)->setData(4, 5, 6);
    (ptr+2)->setData(7, 8, 9);

    std::cout << "At address (ptr + 0)" << std::endl;
    (ptr+0)->getData();
    std::cout << "At address (ptr + 1):" << std::endl;
    (ptr+1)->getData();
    std::cout << "At address (ptr + 2):" << std::endl;
    (ptr+2)->getData();

    delete[] ptr;
    return 0;
}