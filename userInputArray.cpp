# include <iostream>

int main() {
    const int SIZE = 5;
    int userInput[SIZE];

    std::cout << "Please enter " << SIZE << " integers:" << std::endl;

    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Enter integer " << (i + 1) << ": ";
        std::cin >> userInput[i];
    }

    std::cout << "You entered: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << userInput[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}