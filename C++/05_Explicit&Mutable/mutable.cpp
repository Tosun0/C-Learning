#include <iostream>

class Tosun {
    mutable int data; // 읽기전용 함수가 값을 바꿀 수 있게 만들기

    public:
    Tosun(int x) : data(x) {}
    
    void DoSometing(int y) const {
        data = y; //불가능
    }

    void printdata() const { std::cout << data << std::endl; }
};

int main() {
    Tosun tosun(10);
    tosun.printdata();
    tosun.DoSometing(5);
    tosun.printdata();

    getchar(); getchar();
}

// 187