#include <iostream>

int changeValue();

int main() {
    const int& a = changeValue();
    std::cout << a << std::endl;

    getchar();

}

int changeValue() {
    int a = 313;
    return a;
}