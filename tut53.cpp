#include <iostream>

// Following are the situations where ‘this’ pointer is used:
// 1) When local variable’s name is same as member’s name
// 2) To return reference to the calling object

class XY {
    int x;
    int y;
    public:
        XY & setData(int x, int y) {
            (*this).x = x;
            this->y = y;
            return *this;
        }
        int getData() {
            std::cout << "Value of x: " << x << std::endl;
            std::cout << "Value of y: " << y << std::endl;
            return 0;
        }
};

int main() {
    XY x;
    x.setData(0, 1).getData();
    return 0;
}