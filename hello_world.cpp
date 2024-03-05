#include <iostream>
#include <string>

int main() {
    std::cout << "Enter your name: ";

    std::string name;
    std::getline(std::cin, name); //ввод имени

    std::cout << "Hello world from @" << name << std::endl; //вывод имени

    return 0;
}
