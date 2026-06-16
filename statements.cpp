# include <iostream>

int main() {
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;
    if (age < 18) {
        std::cout << "Restricted content for minors." << std::endl;
    } else if (age >= 18 && age < 65) {
        std::cout << "Welcome to the site!" << std::endl;
    } else {
        std::cout << "You too old to enter." << std::endl;
    }

}