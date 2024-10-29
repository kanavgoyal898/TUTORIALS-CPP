#include <iostream>

// multiple inheritance
class BaseClass1 {
    private:
        int base1a;
    protected:  
        int base1b;
    public:
        int base1c;
        int setBase1(int a, int b, int c) {
            base1a = a;
            base1b = b;
            base1c = c;
            return 0;
        }
        int getBase1a() {
            return base1a;
        }
        int getBase1b() {
            return base1b;
        }
        int getBase1c() {
            return base1c;
        }
};

class BaseClass2 {
    private:
        int base2a;
    protected:  
        int base2b;
    public:
        int base2c;
        int setBase2(int a, int b, int c) {
            base2a = a;
            base2b = b;
            base2c = c;
            return 0;
        }
        int getBase2a() {
            return base2a;
        }
        int getBase2b() {
            return base2b;
        }
        int getBase2c() {
            return base2c;
        }
};

class DerivedClass : public BaseClass1, public BaseClass2 {
    private:
        int deriveda;
    protected:  
        int derivedb;
    public:
        int derivedc;
        int setDerived(int a, int b, int c) {
            deriveda = a;
            derivedb = b;
            derivedc = c;
            return 0;
        }
        int getderiveda() {
            return deriveda;
        }
        int getderivedb() {
            return derivedb;
        }
        int getderivedc() {
            return derivedc;
        }
};

int main() {
    DerivedClass d;
    d.setBase1(1, 2, 3);
    d.setBase2(4, 5, 6);
    d.setDerived(7, 8, 9);
    return 0;
}