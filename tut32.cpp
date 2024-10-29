#include <iostream>

class ClassName {
    int x;
    
    // default arguments
    public: ClassName(int _x = 0) {
        x = _x;
        std::cout << "Default Value for x: " << x << std::endl;
    }
};

int main() {
    ClassName c;
    return 0;
}