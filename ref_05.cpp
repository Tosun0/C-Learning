#include <iostream>

int main() {
    int arrSize;
    std::cout << "arr size : ";
    std::cin >> arrSize;
    int *list = new int[arrSize];

    for (int i = 0; i < arrSize; i++) {
        std::cin >> list[i];
    }

    for (int i = 0; i < arrSize; i++) {
        std::cout << i <<"th element of list : " << list[i] << std::endl;
    }

    delete[] list;

    getchar(); getchar();
    return 0;
}