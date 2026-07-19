# include <iostream>
# include <string>

char getComputerChoice();
void showChoices(char player, char computer);

char UserChoice(){
    char player;
    std::cout << "Enter your choice (R for Rock, P for Paper, S for Scissors): ";
    std::cout << "R for Rock, P for Paper, S for Scissors: ";
    std::cin >> player;

    do {
        if (player == 'R' || player == 'P' || player == 'S') {
            break;
        } else {
            std::cout << "Invalid choice. Please enter R, P, or S: ";
            std::cin >> player;
        }
    } while (true);

    return player;

}

int main() {
    std::cout << "Welcome to Rock, Paper, Scissors!" << std::endl;
    char userChoice = UserChoice();
    std::cout << "You chose: " << userChoice << std::endl;
    char computerChoice = getComputerChoice();
    showChoices(userChoice, computerChoice);
    return 0;
}

char getComputerChoice() {
    char computerChoice;
    int randomNum = rand() % 3;

    switch (randomNum) {
        case 0:
            computerChoice = 'R';
            break;
        case 1:
            computerChoice = 'P';
            break;
        case 2:
            computerChoice = 'S';
            break;
    }


    return computerChoice;
}

void showChoices(char player, char computer) {
    std::cout << "You chose: " << player << std::endl;
    std::cout << "Computer chose: " << computer << std::endl;

    switch (player) {
        case 'R':
            std::cout << "You chose Rock." << std::endl;
            break;
        case 'P':
            std::cout << "You chose Paper." << std::endl;
            break;
        case 'S':
            std::cout << "You chose Scissors." << std::endl;
            break;
    }

    switch (computer) {
        case 'R':
            std::cout << "Computer chose Rock." << std::endl;
            break;
        case 'P':
            std::cout << "Computer chose Paper." << std::endl;
            break;
        case 'S':
            std::cout << "Computer chose Scissors." << std::endl;
            break;
    }
}