#include <iostream>
typedef struct Animal {
    char name[30];
    int age;

    int health;
    int food;
    int clean;
} Animal;

void createAnimal(Animal *animal) {
    std::cout << "Name : ";
    std::cin >> animal->name;

    std::cout << "Age : ";
    std::cin >> animal->age;

    animal->health = 100;
    animal->food = 100;
    animal->clean = 100;
}

void play(Animal *animal) {
    animal->health += 10;
    animal->food -= 20;
    animal->clean -= 30;
}

void food(Animal *animal) {
    animal->health += 10;
    animal->food += 40;
    animal->clean -= 30;
}

void clean(Animal *animal) {
    animal->health -= 10;
    animal->food -= 20;
    animal->clean += 50;
}

void showStat(Animal *animal) {
    std::cout << animal->name << std::endl;
    std::cout << "Health : " << animal->health << std::endl;
    std::cout << "Food : " << animal->food << std::endl;
    std::cout << "Clean : " << animal->clean << std::endl;
}

void oneDayPass(Animal *animal) {
    animal->health -= 10;
    animal->food -= 30;
    animal->clean -= 20;
}

int main() {
    Animal *list[10];
    int animalNum = 0;
    int input;

    for(;;) {
        std::cout << "1. Add Animal" << std::endl;
        std::cout << "2. Play" << std::endl;
        std::cout << "3. Food" << std::endl;
        std::cout << "4. Clean" << std::endl;
        std::cout << "5. Show Stats" << std::endl;

        std::cin >> input;

        switch (input) {
            int playWith;
            case 1:
                list[animalNum] = new Animal;
                createAnimal(list[animalNum]);
                animalNum++;

                break;
            
            case 2:
                std::cout << "Play who?" << std::endl;
                std::cin >> playWith;

                if(playWith < animalNum) play(list[playWith]);
                break;
            
            case 3:
                std::cout << "Food who?" << std::endl;
                std::cin >> playWith;

                if(playWith < animalNum) food(list[playWith]);
                break;
            
            case 4:
                std::cout << "Clean who?" << std::endl;
                std::cin >> playWith;

                if(playWith < animalNum) clean(list[playWith]);
                break;
            
            case 5:
                std::cout << "Show stats?" << std::endl;
                std::cin >> playWith;

                if(playWith < animalNum) showStat(list[playWith]);
                break;
            
            default:
                break;
        }

        for (int i = 0; i != animalNum; i++) {
            oneDayPass(list[i]);
        }
    }

    for (int i = 0; i != animalNum; i++) {
        delete list[i];
    }

    getchar(); getchar();
    return 0;
}