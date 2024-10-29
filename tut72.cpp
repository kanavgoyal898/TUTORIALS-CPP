#include <iostream>
#include <list>

// Lists in STL

template <class T>
int display(std::list<T> &lst){ 
    typename std::list<T> :: iterator it;
    for(it = lst.begin(); it != lst.end(); it++) {
        std::cout << *(it) << " ";
    }
    std::cout << std::endl;
    return 0;
}

int main() {
    int element;

    std::list<int> l();

    std::list<int> list(5);
    std::list<int> :: iterator iter = list.begin();
    for(int i = 0; i < 5; i++) {
        std::cout << "Enter Element: ";
        std::cin >> *iter++;
    }
    std::cout << "List before sorting:\n";
    display(list);

    std::cout << "List after sorting:\n";   list.sort();
    display(list);

    std::cout << "List on reversing:\n";    list.reverse();
    display(list);
    
    return 0;
}