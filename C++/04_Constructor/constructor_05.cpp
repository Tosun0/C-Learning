#include <string.h>
#include <iostream>

class Photon_Cannon {
    int hp, shield;
    int coord_x, coord_y;
    int damage;

    char* name;

    public:
    Photon_Cannon(int x, int y);
    Photon_Cannon(int x, int y, const char* cannon_name);
    Photon_Cannon(const Photon_Cannon &pc);
    ~Photon_Cannon();

    void show_status();
};

Photon_Cannon::Photon_Cannon(int x, int y) {
    hp = shield = 100;
    coord_x = x;
    coord_y = y;
    damage = 20;

    name = NULL;
}

Photon_Cannon::Photon_Cannon(int x, int y, const char* cannon_name) {
    hp = shield = 100;
    coord_x = x;
    coord_y = y;
    damage = 20;

    name = new char[strlen(cannon_name) + 1];
    strcpy(name, cannon_name);
}

Photon_Cannon::Photon_Cannon(const Photon_Cannon &pc) {
    std::cout << "calling copy constructor!" << std::endl;
    hp = pc.hp;
    shield = pc.shield;
    coord_x = pc.coord_x;
    coord_y = pc.coord_y;
    damage = pc.damage;

    name = new char[strlen(pc.name) + 1];
    strcpy(name, pc.name);
}

Photon_Cannon::~Photon_Cannon() {
    if(name) { delete[] name; }
}

void Photon_Cannon::show_status() {
    std::cout << "Photon Cannon :: " << name << std::endl;
    std::cout << "Location : " << coord_x << ", " << coord_y << std::endl;
    std::cout << "HP : " << hp << std::endl;
}

int main() {
    Photon_Cannon pc1(3, 3, "Cannon");
    Photon_Cannon pc2 = pc1;
    Photon_Cannon pc3(1, 1);
    pc3 = pc2;

    Photon_Cannon pc4 = pc2;
    Photon_Cannon pc5(pc2);

    pc1.show_status();
    pc2.show_status();
    pc3.show_status();
    pc4.show_status();
    pc5.show_status();

    getchar(); getchar();
}