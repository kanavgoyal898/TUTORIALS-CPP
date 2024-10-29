#include <iostream>
#include <string>

// A pure virtual function (or abstract function) in C++ is a virtual function for which we can have an implementation, but we must override that function in the derived class, otherwise, the derived class will also become an abstract class. A pure virtual function is declared by assigning 0 in the declaration.

// abstract base class
class Account {
    public:
        std::string username;
        int followers;
        Account(std::string str, int flwrs) {
            username = str;
            followers = flwrs;
        }

        // pure virtual function
        virtual int display() = 0;
};

class Post: public Account {
    int likes;

    public:
        Post(std::string str, int flwrs, int lks) : Account(str, flwrs) {
            likes = lks;
        }
        int display() {
            std::cout << "Username: " << username << std::endl;
            std::cout << "Followers: " << followers << std::endl;
            std::cout << "Post Likes: " << likes << std::endl;
            return 0;
        }
};

class Reel: public Account {
    int likes;

    public:
        Reel(std::string str, int flwrs, int lks) : Account(str, flwrs) {
            likes = lks;
        }
        int display() {
            std::cout << "Username: " << username << std::endl;
            std::cout << "Followers: " << followers << std::endl;
            std::cout << "Reel Likes: " << likes << std::endl;
            return 0;
        }
};

int main() {
    Post ob1("_kanav_6868", 100, 68);
    Reel ob2("_kanav_6868", 100, 68);

    Account *ptr1 = &ob1; 
    Account *ptr2 = &ob2;

    ptr1->display(); 
    ptr2->display(); 
    return 0;
}