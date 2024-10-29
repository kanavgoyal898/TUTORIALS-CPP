#include <iostream>
#include <vector>

// Vectors in STL

template <class T>
int display(std::vector<T> &vec) {
    for(int i = 0; i < vec.size(); i++) {
        std::cout << vec.at(i) << " ";
    }
    std::cout << std::endl;
    return 0;
}

int main() {

    std::vector<int> vec;
    int element, size;
    std::cout << "Enter size of Vector: ";
    std::cin >> size;
    std::cout << std::endl;

    for(int i = 0; i < size; i++) {
        std::cout << "Enter Element: ";
        std::cin >> element;
        vec.push_back(element);
    }
    display(vec);

    for(int i = 0; i < size; i++) {
        vec.pop_back();
    }
    display(vec);

    std::vector<int> :: iterator iter = vec.begin();
    for(int i = 0; i < size; i++) {
        std::cout << "Enter Element: ";
        std::cin >> element;
        vec.insert((iter+i), element);
    }
    display(vec);

    //initialisation of vectors:
    std::vector<int> v0;
    std::cout << "Size of vector v0: " << v0.size() << std::endl;
    display(v0);

    std::vector<int> v1(5);
    std::cout << "Size of vector v1: " << v1.size() << std::endl;
    display(v1);

    std::vector<int> v2(5, 1);
    std::cout << "Size of vector v2: " << v2.size() << std::endl;
    display(v2);

    return 0;
} 