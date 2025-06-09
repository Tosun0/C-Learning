#include <iostream>

class BaseTosun {
    protected: //Private을 상속된 개체만 접근 가능하게게
    std::string name, type;
    int hp, dmg;

    public:
    BaseTosun() : name("Normal Tosun"), type("Normal") {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Type: " << type << std::endl;
        std::cout << "is spawned" << std::endl;
    }
};

class FireTosun : public BaseTosun {
    public:
    FireTosun() : BaseTosun() {
        name = "Fire Tosun";
        type = "Fire";
        std::cout << "Name: " << name << std::endl;
        std::cout << "Type: " << type << std::endl;
        std::cout << "is spawned" << std::endl;
    }
};

int main() {
    BaseTosun bTosun;
    FireTosun fTosun;

    getchar(); getchar();
}