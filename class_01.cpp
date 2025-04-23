#include <iostream>

class Animal {
    private:
        int food;
        int weight;

    public:
        void setAnimal(int _food, int _weight) {
            food = _food;
            weight = _weight;
        }

        void setFeed(int inc) {
            food += inc;
            weight += (inc / 3);
        }
        
        void viewStats() {
            std::cout << "Hungry : " << food << std::endl;
            std::cout << "Weight : " << weight << std::endl;
        }
};

int main() {
    Animal animal;
    animal.setAnimal(100, 50);
    animal.setFeed(30);
    animal.viewStats();

    getchar(); getchar();

    return 0;
}