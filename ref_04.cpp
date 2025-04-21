#include <iostream>

int main() {

    int *p = new int;
    *p = 10;

    std::cout << *p << std::endl;
    delete p;

    getchar();
    return 0;
}