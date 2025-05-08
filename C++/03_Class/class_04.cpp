// #include <iostream>

// class Marine {
//     int hp;
//     int coordX, coordY;
//     int dmg;
//     bool isDead;

//     public:
//         Marine();
//         Marine(int x, int y);

//         int attack(Marine marineATK, Marine MarineDFD);
//         void beAttacked(int damage);
//         void move(int x, int y);

//         void showStat();
// };

// Marine::Marine() {
//     hp = 50;
//     coordX = coordY = 0;
//     dmg = 5;
//     isDead = false;
// }

// Marine::Marine(int x, int y) {
//     coordX = x;
//     coordY = y;
//     hp = 50;
//     dmg = 5;
//     isDead = false;
// }

// void Marine::move(int x, int y) {
//     coordX = x;
//     coordY = y;
// }

// int Marine::attack(Marine marineATK, Marine marineDFD) {
//     marineDFD:: hp - marineATK::dmg;
// }

// void Marine::beAttacked(int damage) {
//     hp -= damage;
//     if (hp <= 0) isDead = true;
// }

// void Marine::showStat() {
//     std::cout << "******* Marine *******" << std::endl;
//     std::cout << "HP : " << hp << std::endl;
//     std::cout << "Location X : ( " << coordX << ", " << coordY << " ) " << std::endl;
// }

// int main() {
//     Marine marine1(2, 3);
//     Marine marine2 = Marine(3, 5);

//     marine1.showStat();
//     marine2.showStat();

//     getchar(); getchar();
//     return 0;
// }