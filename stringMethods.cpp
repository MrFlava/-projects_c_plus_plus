#include <iostream>

int main(){
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (name.empty()) {
        std::cout << "You didn't enter a name!" << std::endl;
    } else {
        std::cout << "You entered: " << name << std::endl;
    }

    if (name.length() > 12) {
        std::cout << "Your name can't be longer than 12 characters!" << std::endl;
    } else {
        std::cout << "Welcome, " << name << "!" << std::endl;
    }

    name.append("@gmail.com");
    std::cout << "Your email is: " << name << std::endl;
    return 0;
}