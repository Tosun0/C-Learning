#include <iostream>

// 가상 함수와 레퍼런스

class A {
    public:
    virtual void show() { std::cout << "Parent!" << std::endl; }
};

class B : public A {
    public:
    void show() override {std::cout << "Child!" << std::endl; }
};

void test(A& a) { a.show(); }

int main() {
    A a;
    B b;

    test(a);
    test(b);

    getchar(); getchar();
}