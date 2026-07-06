#include <iostream>

int main() {
    int rows = 5;
    int columns = 5;
    char symbol = '*';

    std::cout << "How many rows?:" << std::endl;
    std::cin >> rows;
    std::cout << "How many columns?:" << std::endl;
    std::cin >> columns;
    std::cout << "What symbol do you want to use?:" << std::endl;
    std::cin >> symbol;

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= columns; ++j) {
            std::cout << symbol << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}