# include <iostream>

int main() {
    std::string name;
    std::cout << "What is your name? ";
    std::cin >> name;
    std::cout << "Hello, " << name << "!" << std::endl;

    int age;
    std::cout << "How old are you? ";
    std::cin >> age;
    std::cout << "You are " << age << " years old." << std::endl;

    return 0;
}