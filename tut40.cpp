#include <iostream>

// multi-level inheritance
class GrandParentClass {
    private:
        int data1;
    protected:
        int data2;
    public:
        int data3;
        int setData1(int data) {
            data1 = data;
        }
        int setData2(int data) {
            data2 = data;
        }
        int setData3(int data) {
            data3 = data;
        }
        int getData1() {
            return data1;
        }
        int getData2() {
            return data2;
        }
        int getData3() {
            return data3;
        }
};

class ParentClass : public GrandParentClass {
    private:
        int data4;
    protected:
        int data5;
    public:
        int data6;
        int setData(int data) {
            data = data;
        }
        int setData5(int data) {
            data5 = data;
        }
        int setData6(int data) {
            data6 = data;
        }
        int getData4() {
            return data4;
        }
        int getData5() {
            return data5;
        }
        int getData6() {
            return data6;
        }
};

class ChildClass : public ParentClass {
    private:
        int data7;
    protected:
        int data8;
    public:
        int data9;
        int setData7(int data) {
            data7 = data;
        }
        int setData8(int data) {
            data8 = data;
        }
        int setData9(int data) {
            data9 = data;
        }
        int getData7() {
            return data7;
        }
        int getData8() {
            return data8;
        }
        int getData9() {
            return data9;
        }
};

int main() {
    return 0;
}