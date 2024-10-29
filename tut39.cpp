#include <iostream>

/*
                            public-mode         private-mode        protected-mode
    public members          public              private             protected
    protected members       protected           private             protected
    private members         not inherited       not inherited       not inherited
*/

class BaseClass {
    private:
        int a;
    protected:
        int b;
    public:
        int c;
};  

class DerivedClass : BaseClass {};

int main() {
    return 0;
}