#include <iostream>
#include <string>

int main() {
    std::cout << "Hello! What is your name? " << std::endl;
    std::string name;
    if (std::getline(std::cin, name)) {
        std::cout << "Hello, " << name << "! Welcome to C++ programming." << std::endl;
    }
    return 0;
}
