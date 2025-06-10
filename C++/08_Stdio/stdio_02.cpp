#include <iostream>
#include <fstream>

int main() {
    std::ifstream in("test.txt");
    std::string s;

    if(in.is_open()) {
        in >> s;
        std::cout << "input text : " << s << std::endl;
    } else {
        std::cout << "File is cannot be found!" << std::endl;
    }

    getchar(); getchar();
} //373