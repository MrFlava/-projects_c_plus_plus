# include <iostream>

int main()
{
    int temp;
    bool isSunny = true;

    std::cout << "What is the temperature outside? ";
    std::cin >> temp;

    if (temp > 0 && temp < 30){
        std::cout << "The weather is good\n!" << std::endl;
    }
    else {
        std::cout << "The weather is bad!\n" << std::endl;
    }

    if (temp < 0 || temp > 30){
        std::cout << "The weather is bad!\n" << std::endl;
    }
    else {
        std::cout << "The weather is good!\n" << std::endl;
    }

    if (!isSunny){
        std::cout << "It is not sunny outside!\n" << std::endl;
    }
    else {
        std::cout << "It is sunny outside!\n" << std::endl;
    }
    return 0;
}