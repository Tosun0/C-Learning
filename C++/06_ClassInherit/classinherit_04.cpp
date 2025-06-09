#include <iostream>

class BaseTosun {
    protected:
    std::string name;

    public :
    BaseTosun() : name("Base Tosun") { std::cout << name << " is spawned!" << std::endl; }

    void introduce() { std::cout << "I am " << name << std::endl; }
};

class FireTosun : public BaseTosun {
    std::string child_name;

    public:

    FireTosun() : child_name("Child Tosun"), BaseTosun() {
        std::cout << child_name << " is spawned!" << std::endl;

        name = "Hi Tosun";

        std::cout << name << std::endl;
    }

    void introduce() { std::cout << "I am " << child_name << std::endl; }
};

int main() {
    BaseTosun bTosun;
    bTosun.introduce();
    
    FireTosun fTosun;
    fTosun.introduce();

    getchar(); getchar();
}