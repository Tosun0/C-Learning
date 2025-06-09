#include <iostream>

// 순수 가상 함수
// 추상 클래스스

class Animal {
    public:
    Animal() {}
    virtual ~Animal() { std::cout << "I'm dying!" << std::endl; }
    virtual void speak() = 0; // Pure Virtual Function : 순수 가상 함수 (반드시 오버라이딩 되어야 하는 함수) / 순수가상함수가 있으면 인스턴스 생성 불가
                              // Abstract Class : 추상 클래스 (순수 가상 함수를 한 개 이상 포함한 클래스)
};

class Dog : public Animal {
    public:
    Dog() : Animal() {}
    void speak() override { std::cout << "Wal Wal" << std::endl; }
    ~Dog() { std::cout << "dog is dying" << std::endl; }
};

class Cat : public Animal {
    public:
    Cat() : Animal() {}
    void speak() override { std::cout << "Nyaong" << std::endl; }
    ~Cat() { std::cout << "cat is dying" << std::endl; }
};

int main() {
    /* Animal a; */ // 인스턴스 생성 불가
    Animal* dog = new Dog;
    Animal* cat = new Cat;

    dog->speak();
    cat->speak();

    delete dog;
    delete cat;

    getchar(); getchar();
} //332