# include <iostream>
# include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0)); // Seed the random number generator
    int n;
    std::cout << "Enter the number of random numbers to generate: ";
    std::cin >> n;

    std::cout << "Random numbers: ";
    for (int i = 0; i < n; ++i) {
        int randomNum = rand() % 100; // Generate a random number between 0 and 99
        std::cout << randomNum << " ";
    }
    std::cout << std::endl;

    return 0;
}