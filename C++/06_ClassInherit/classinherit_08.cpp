#include <iostream>

// 가상 함수

class Base {

    public:
    Base() { std::cout << "Base Class " << std::endl; }

    virtual void what() { std::cout << "Base Class's what()" << std::endl; }
};

class Derived : public Base {
    
    public :
    Derived() : Base() { std::cout << "Derived Class" << std::endl; }

    void what() { std::cout << "Derived Class's what()" << std::endl; }
};

int main() {
    Base p;
    Derived c;

    Base* pp = &p;
    Base* pc = &c;

    p.what();
    c.what();

    pp->what();
    pc->what();

    getchar(); getchar();
} // 포인터로 Virtual 함수를 호출 할 때 부모 클래스인지 자손 클래스인지 확인하고 지가 알아서 호출함