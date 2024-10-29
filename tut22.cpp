#include <iostream>
#include <string>

// nesting of member functions

class Binary {
    std::string s;

    bool isBinary(void);
    void getString(void);

    public: 
        void setString(void);
        void getOnesCompliment(void);

} b;

void Binary :: setString() {
    std::cout << "Enter your Binary Number: ";
    std::cin >> s;

    for(int i = 0; i < s.length(); i++) {
        if(!isBinary()) {
            return setString();
        } else {
            return getString();
        }
    }
}

bool Binary :: isBinary() {
    for(int i = 0; i < s.length(); i++) {
        if((s.at(i) != '0') && (s.at(i) != '1')) {
            std::cout << "Invalid Input. Please Try Again." << std::endl;
            return false;
        } else {
            return true;
        }
    }
}

void Binary :: getString() {
    std::cout << "Output Binary Number: ";
    for(int i = 0; i < s.length(); i++) {
        std::cout << s.at(i);
    }
    std::cout << std::endl;
}

void Binary :: getOnesCompliment() {
    std::cout << "Following One's Compliment, ";
    for(int i = 0; i < s.length(); i++) {
        if(s.at(i) == '0') {
            s.at(i) = '1';
        } else {
            s.at(i) = '0';
        }
    }
    getString();
}

int main() {
    b.setString();
    b.getOnesCompliment();
    return 0;
}