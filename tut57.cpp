#include <iostream>
#include <string>

class Account {
    public:
        std::string username;
        int followers;
        Account(std::string str, int flwrs) {
            username = str;
            followers = flwrs;
        }
        virtual int display() {}
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