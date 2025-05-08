#include <iostream>

class Tosun {
    static int total_tosun;
    const static int i = 0;

    int hp;
    int coord_x, coord_y;
    const int damage;
    bool is_dead;

    public:
    Tosun();
    Tosun(int x, int y);
    Tosun(int x, int y, int damage);
    ~Tosun();

    int attack() const;
    Tosun& be_attacked(int damage_earn);
    void move(int x, int y);
    void show_status();
    static void show_total_num();
}; int Tosun::total_tosun = 0;

Tosun::Tosun() : hp(50), coord_x(0), coord_y(0), damage(5), is_dead(false) { total_tosun++; }

Tosun::Tosun(int x, int y)
    : coord_x(x), coord_y(y), hp(50), damage(5), is_dead(false) { total_tosun++; }

Tosun::Tosun(int x, int y, int damage)
    : coord_x(x), coord_y(y), hp(50), damage(damage), is_dead(false) { total_tosun++; }

Tosun::~Tosun() { total_tosun--; }

int Tosun::attack() const { return damage; }

Tosun& Tosun::be_attacked(int damage_earn) {
    hp -= damage_earn;
    if(hp <= 0) is_dead = true;
    return *this;
}

void Tosun::move(int x, int y) {
    coord_x = x;
    coord_y = y;
}

void Tosun::show_status() {
    std::cout << "Tosun :: " << std::endl;
    std::cout << "Location : " << coord_x << ", " << coord_y << std::endl;
    std::cout << "DP : " << damage << std::endl;
    std::cout << "HP : " << hp << std::endl;
}

void Tosun::show_total_num() {
    std::cout << "Total Tosun number : " << total_tosun << std::endl;
}

void create_tosun() {
    Tosun tosun3(10, 10, 4);
    tosun3.show_status();
    Tosun::show_total_num();
}

int main() {
    Tosun tosun1(2, 3);
    tosun1.show_status();
    Tosun::show_total_num();

    Tosun tosun2(3, 5, 10);
    tosun2.show_status();
    Tosun::show_total_num();

    create_tosun();

    std::cout << "Tosun 1 attacked Tosun 2!" << std::endl;
    tosun2.be_attacked(tosun1.attack());
    tosun2.show_status();
    Tosun::show_total_num();

    std::cout << "Tosun 2 attacked Tosun 1 twice!" << std::endl;
    tosun1.be_attacked(tosun2.attack()).be_attacked(tosun2.attack());
    tosun1.show_status();
    Tosun::show_total_num();


    getchar(); getchar();
}

//133