#include <iostream>

class Base {
    std::string s;

    public:
    Base() : s("Base") { std::cout << "Parent Class" << std::endl; }

    void what() { std::cout << s << std::endl; }
};

class Derived : public Base {
    std::string s;

    public:
    Derived() : s("Derived") { std::cout << "Child Class" << std::endl; }

    void what() { std::cout << s << std::endl; }
};

int main() {
    // 포인터로 구현
    Base p;
    Derived c;
    Base* pb = &c;
    Derived *pc = &c;
    pb->what();
    pc->what();

    getchar(); getchar();
}