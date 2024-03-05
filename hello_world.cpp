#include <iostream>
#include <string>

int main() {
    std::cout << "Enter your name: ";

    std::string name;
    std::getline(std::cin, name);

    std::cout << "Hello world from @" << name << std::endl;

    return 0;
}
