#include <iostream>

class Point {
    int x, y, z;

    // function overloading
    public: Point() {
        x = 0;
        y = 0;
        z = 0;
        std::cout << "(" <<  x << " " << y << " " << z << ")" << std::endl;
    }
    public: Point(int _x) {
        x = _x;
        y = 0;
        z = 0;
        std::cout << "(" <<  x << " " << y << " " << z << ")" << std::endl;
    }
    public: Point(int _x, int _y) {
        x = _x;
        y = _y;
        z = 0;
        std::cout << "(" <<  x << " " << y << " " << z << ")" << std::endl;
    }
    public: Point(int _x, int _y, int _z) {
        x = _x;
        y = _y;
        z = _z;
        std::cout << "(" <<  x << " " << y << " " << z << ")" << std::endl;
    }

};

int main() {
    Point p;
    Point q(1);
    Point r(1, 2);
    Point s(1, 2, 3);
}