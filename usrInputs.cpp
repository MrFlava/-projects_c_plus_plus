#include <iostream>

int main() {
    std::string name;
    int age;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name); // Read a line of input into the string 'name'

    std::cout << "Enter your age: ";
    std::cin >> age; // Read an integer input into the variable 'age'

    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;

    return 0;
} 