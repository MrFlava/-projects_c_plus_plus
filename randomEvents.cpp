# include <iostream>
# include <cstdlib>
# include <ctime>

int main() {
    srand(time(0)); // Seed the random number generator with the current time
    int randomNum = rand() % 5 + 1;

    switch(randomNum) {
        case 1:
            std::cout << "You found a treasure chest!" << std::endl;
            break;
        case 2:
            std::cout << "A wild animal appears!" << std::endl;
            break;
        case 3:
            std::cout << "You fell into a trap!" << std::endl;
            break;
        case 4:
            std::cout << "You meet a friendly traveler." << std::endl;
            break;
        case 5:
            std::cout << "You discover a hidden passage." << std::endl;
            break;
    }
}