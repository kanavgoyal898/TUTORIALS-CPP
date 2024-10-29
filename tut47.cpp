#include <iostream>
#include <cmath>

// Solution to Assignment - Calculator

class SimpleCalc {
    protected:
        int a;
        int b;

    public:
        SimpleCalc(int a, int b) {
            this->a = a;
            this->b = b;
        }

        int oper() {
            std::cout << "a+b: " << a+b << std::endl;
            std::cout << "a-b: " << a-b << std::endl;
            std::cout << "a*b: " << a*b << std::endl;
            std::cout << "a/b: " << a/b << std::endl;
            return 0;
        }
};

class ScientificCalc {
    protected:
        int x;

    public:
        ScientificCalc(int x) {
            this->x = x;
        }

        int oper() {
            std::cout << "sin(x): " << sin(x) << std::endl;
            std::cout << "cos(x): " << cos(x) << std::endl;
            std::cout << "tan(x): " << tan(x) << std::endl;
            std::cout << "exp(x): " << exp(x) << std::endl;
            return 0;
        }
};

class HybridCalc : public SimpleCalc, public ScientificCalc {
    public:
        HybridCalc(int a, int b, int c) : SimpleCalc(a, b), ScientificCalc(c) {
            std::cout << "HYBRID CALCULATOR" << std::endl;
        }
        int oper() {
            SimpleCalc::oper();
            ScientificCalc::oper();
        }
};

int main() {
    HybridCalc calc(3, 4, 5);
    calc.oper();
    return 0;
}