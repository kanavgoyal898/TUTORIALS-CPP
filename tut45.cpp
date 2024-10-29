#include <iostream>

// Virtual Base Class
class GrandParentClass {
    public:
        int a;
        int setData(int data) {
            a = data;
            return 0;
        }
        int getData() {
            return a;
        }
};

class ParentClassA : virtual public GrandParentClass {
    public:
        int b;
        int setData(int data) {
            b = data;
            return 0;
        }
        int getData() {
            return b;
        }
};
class ParentClassB : public virtual GrandParentClass {
    public:
        int c;
        int setData(int data) {
            c = data;
            return 0;
        }
        int getData() {
            return c;
        }
};

class ChildClass : public ParentClassA, public ParentClassB {
    public:
    int setData(int data1, int data2, int data3) {
        GrandParentClass::setData(data1);
        ParentClassA::setData(data2);
        ParentClassB::setData(data3);
        return 0;
    }
    int getData() {
        return a+b+c;
    }
};

int main() {
    GrandParentClass g;
    g.setData(1);
    std::cout << "a: " << g.getData() << std::endl;

    ParentClassA p1;
    p1.setData(2);
    std::cout << "b: " << p1.getData() << std::endl;

    ParentClassB p2;
    p2.setData(3);
    std::cout << "c: " << p2.getData() << std::endl;

    ChildClass c;
    c.setData(1, 2, 3);
    std::cout <<"Sum: " <<  c.getData() << std::endl;
};