#include <iostream>

// 다중 상속

class A {
    public:
    int a;
    void show() { std::cout << "a : " << a << std::endl; }
};

class B {
    public:
    int b;
    void show() { std::cout << "b : " << b << std::endl; }
};

class C : public A, public B {
    public:
    int c;

    void show() {
        std::cout << "a : " << a << std::endl;
        std::cout << "b : " << b << std::endl;
        std::cout << "c : " << c << std::endl;
    }
};

int main() {
    C c;
    A* a = &c;
    B* b = &c;
    
    a->a = 3;
    b->b = 2;
    c.c = 5;

    std::cout << "------ a ------" << std::endl;
    a->show();
    std::cout << "------ b ------" << std::endl;
    b->show();
    std::cout << "------ c ------" << std::endl;
    c.show();

    getchar(); getchar();
}

// 다중 상속 시 중복 변수 이름 X
// 공포의 다이아몬드 상속
// class FireBossTosun : public virtual Tosun, public virtual BossTosun

// 브리지 패턴 / 중첩된 일반화 / 다중 상속

//339