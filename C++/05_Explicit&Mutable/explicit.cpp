#include <iostream>

class Tosun {
    int carrot;
    int coord_x, coord_y;

    public:
    Tosun(int money);
    explicit Tosun(int x, int y); // 암시적 변환 금지, 복사 생성자 호출 불가

    void show_status();
};

Tosun::Tosun(int money) : carrot(money), coord_x(0), coord_y(0) { show_status(); }
Tosun::Tosun(int x, int y) : carrot(0), coord_x(x), coord_y(y) { show_status(); }

void Tosun::show_status() {
    std::cout << "------------------" << std::endl;
    std::cout << carrot << std::endl;
    std::cout << coord_x << std::endl;
    std::cout << coord_y << std::endl;
}

void make_tosun(Tosun a) {};

int main() {

    //기본 생성자
    Tosun tosun1(10);

    // 대입의 형태
    Tosun tosun2 = 30;

    // 명시적 호출
    make_tosun(Tosun (20));

    // 암묵적 변환
    make_tosun(20);

    // 명시적 호출
    make_tosun(Tosun (3, 5));

    // 인자 두 개 이상 생성자 호출 문법
    /*make_tosun({3, 5});*/


    getchar(); getchar();
}