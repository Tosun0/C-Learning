#include <iostream>

int changeVal(int &p) {
    p = 3;

    return 0;
}

int main() {

    int num = 7;

    std::cout << num << std::endl;
    changeVal(num);
    std::cout << num << std::endl;

    getchar();

    return 0;
}