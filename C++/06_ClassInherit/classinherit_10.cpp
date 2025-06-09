#include <iostream>

// 가상 함수와 포인터

class Parent {
    public:
    Parent() { std::cout << "Calling constructor of Parent!" << std::endl; }
    virtual ~Parent() { std::cout << "Calling destructor of Parent" << std::endl; } //Virtual로 소멸자도 클래스에 맞게 호출
};

class Child : public Parent {
    public:
    Child() : Parent() { std::cout << "Calling constructor of Child!" << std::endl; }
    ~Child() { std::cout << "Calling destructor of Child" << std::endl; }
};

int main() {

    std::cout << "-------Normal Child-------" << std::endl;
    {
        Child c;
    }
    std::cout << "-------Parent Pointer pointing Child-------" << std::endl;

    Parent* p = new Child();
    delete p;

    getchar(); getchar();
}