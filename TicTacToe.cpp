# include <iostream>
# include <ctime>

void drawBord(char *spaces);
void playerMove(char * spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main()
{   
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBord(spaces);

    while (running){
        playerMove(spaces, computer);
        drawBord(spaces);
        if (checkWinner(spaces, player, computer)){
            std::cout << "Player wins!" << std::endl;
            running = false;
            break;
        }
        if (checkTie(spaces)){
            std::cout << "It's a tie!" << std::endl;
            running = false;
            break;
        }

        computerMove(spaces, player);
        drawBord(spaces);
        if (checkWinner(spaces, computer, player)){
            std::cout << "Computer wins!" << std::endl;
            running = false;
            break;
        }
        if (checkTie(spaces)){
            std::cout << "It's a tie!" << std::endl;
            running = false;
            break;
        }
    }

    return 0;
}

void drawBord(char *spaces)
{
    std::cout << " " << spaces[0] << " | " << spaces[1] << " | " << spaces[2] << std::endl;
    std::cout << "---|---|---" << std::endl;
    std::cout << " " << spaces[3] << " | " << spaces[4] << " | " << spaces[5] << std::endl;
    std::cout << "---|---|---" << std::endl;
    std::cout << " " << spaces[6] << " | " << spaces[7] << " | " << spaces[8] << std::endl;
}

void playerMove(char * spaces, char computer)
{
    int player;
    std::cout << "Enter a number (1-9): ";
    std::cin >> player;
    player--;
    if (spaces[player] == ' ')
    {
        spaces[player] = 'X';
    }
    else
    {
        std::cout << "Invalid move. Try again." << std::endl;
        playerMove(spaces, computer);
    }
}

void computerMove(char * spaces, char player)
{
    int computer;
    srand(time(0));
    computer = rand() % 9;
    if (spaces[computer] == ' ')
    {
        spaces[computer] = 'O';
    }
    else
    {
        computerMove(spaces, player);
    }
}

bool checkWinner(char *spaces, char player, char computer){
    // Check rows
    for (int i = 0; i < 9; i += 3) {
        if (spaces[i] == player && spaces[i + 1] == player && spaces[i + 2] == player) {
            return true;
        }
    }
    // Check columns
    for (int i = 0; i < 3; i++) {
        if (spaces[i] == player && spaces[i + 3] == player && spaces[i + 6] == player) {
            return true;
        }
    }
    // Check diagonals
    if (spaces[0] == player && spaces[4] == player && spaces[8] == player) {
        return true;
    }
    if (spaces[2] == player && spaces[4] == player && spaces[6] == player) {
        return true;
    }
    return false;
}

bool checkTie(char *spaces) {
    for (int i = 0; i < 9; i++) {
        if (spaces[i] == ' ') {
            return false;
        }
    }
    return true;
}