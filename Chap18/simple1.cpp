#include <iostream>

class X1 {
public:
    int data;
};

class X2 {
public:
    int data;
    X2(int n): data(n) {}
};

class X3 {
public:
    int data;
    X3() = default;
    X3(int n): data(n) {}
};

class X4 {
public:
    int data;
    X4() = delete;
};


int main() {
    X1 my_x1;     
    //X2 my_x2;     
    X3 my_x3;     
    X3 my_x3a{4};     
    X3 my_x3b{my_x3a};     
    //X4 my_x4;     

    std::cout << my_x1.data << '\n';
    //std::cout << my_x2.data << '\n';
    std::cout << my_x3.data << '\n';
    std::cout << my_x3a.data << '\n';
    std::cout << my_x3b.data << '\n';
    //std::cout << my_x4.data << '\n';
}

