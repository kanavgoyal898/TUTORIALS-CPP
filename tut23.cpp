#include <iostream>

class School {
    int className[12];
    int studentNumber[12];
    int totalStudents = 0;

    public: 
        void setInfo(void);
        void getInfo(void);
} s;

void School :: setInfo() {
    for(int i = 0; i < 12; i++) {
        std::cout << "Enter Class: ";
        std::cin >> className[i];
        std::cout << "Enter Number of Students: ";
        std::cin >> studentNumber[i];
    }
}

void School :: getInfo() {
    std::cout << "Total Number of Students: ";
    for(int i = 0; i <12; i++) {
        totalStudents += studentNumber[i];
    }
    std::cout << totalStudents;
}

int main() {
    s.setInfo();
    s.getInfo();
    return 0;
}