#include <iostream>

// Class Templates in C++

template <class T>
class Vector {

    public:
        T* arr;
        int n;
        Vector(int n) {
            this->n = n;
            arr = new T[this->n];
        }
        T dotProduct(Vector & vector) {
            T dotProd = 0;
            for (int i = 0; i < n; i++) {
                dotProd += (this->arr[i] * vector.arr[i]);
            }
        return dotProd;
        }
};

int main() {
    Vector <int> v1(3);
    v1.arr[0] = 1;
    v1.arr[1] = 2;
    v1.arr[2] = 3;

    Vector <int> v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 2;
    v2.arr[2] = 3;

    std::cout << "Dot product for <1,2,3> and <1,2,3>: " << v1.dotProduct(v2) << std::endl;

    return 0;
}