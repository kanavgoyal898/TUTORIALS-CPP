#include <iostream>

class CompoundInterest {
    int principal;
    int rate;
    int timePeriod;
    float amount;

    public: CompoundInterest(int p, int r, int t) {
        principal = p;
        rate = r;
        timePeriod = t;
        
        amount = (float)principal;
        for(int i = 0; i < timePeriod; i++) {
            amount = amount * (rate + 100) / 100;
        }
        std::cout << "Amount: " << amount << std::endl; 
    }
};

int main() {
    int principal, rate, timePeriod;
    std::cout << "Compound Interest Calculator: " << std::endl;
    std::cout << "Principal: ";
    std::cin >> principal;
    std::cout << "Rate: ";
    std::cin >> rate;
    std::cout << "Time Period: ";
    std::cin >> timePeriod;

    // dynamic object instantiation
    CompoundInterest CI(principal, rate, timePeriod);

    return 0; 
}