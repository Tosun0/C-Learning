#include <iostream>

class Base{
    std::string s;

    public:
    Base() : s("Parent") { std::cout << "Base Class" << std::endl; }

    virtual void what() { std::cout << s << std::endl; }
};

class Derived : public Base {
    std::string s;

    public:
    Derived() : s("Child"), Base() { std::cout << "Derived Class" << std::endl; }

    void what() override { std::cout << s << std::endl; } // 강제로 Override 진행 (Const가 붙으면 컴파일 에러 뜸뜸)
    /* void what() const { std::cout << s << std::endl; } */ // const가 붙어 상수함수가 되기 때문에 Override가 일어나지 않음
};

int main() {
    Base p;
    Derived c;

    Base* pp = &p;
    Base* pc = &c;

    pp->what();
    pc->what();

    getchar(); getchar();
}