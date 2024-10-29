#include <iostream>

class Student {
    int id;
    public: 
        static int count;
        static int getCount(void);
        void setData(void) {
            std::cout << "Enter Student ID: ";
            std::cin >> id;
            count++;
        }
};

// static member variables
int Student :: count = 0;

// static member functions
int Student :: getCount() {
    return Student :: count;
}

int main() {
    Student s1, s2, s3;
    s1.setData();
    s2.setData();
    s3.setData();
    std::cout << "Total Number of Students: " << Student::count << std::endl;
    std::cout << "Total Number of Students: " << Student::getCount() << std::endl;
    return 0;
}