#include <iostream>

class BaseTosun {
    std::string name;

    public:
    BaseTosun() : name("Base Tosun") { std::cout << "based class" << std::endl; }

    void what() { std::cout << name << std::endl; }
};

class FireTosun : public BaseTosun {
    std::string name;

    public:
    FireTosun() : BaseTosun(), name("FireTosun") {
        std::cout << "derived class" << std::endl;

        what();
    }
};

int main() {
    std::cout << "----------Creating Base Class----------" << std::endl;
    BaseTosun tosun;

    std::cout << "--------Creating Derived Class---------" << std::endl;
    FireTosun ftosun;

    getchar(); getchar();
}