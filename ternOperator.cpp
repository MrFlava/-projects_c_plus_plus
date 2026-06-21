# include <iostream>

int main()
{
    int  grade = 75;

    grade >= 60 ? std::cout << "Passed \n" : std::cout << "Failed \n";

    int number = 9;
    number % 2 == 1 ? std::cout << "Odd \n" : std::cout << "Even \n";

    bool hungry = true;

    std::cout << (hungry ? "Eat something \n" : "You are full \n");

    return 0;
}