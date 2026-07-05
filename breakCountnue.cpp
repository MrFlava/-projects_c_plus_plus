# include <iostream>

int main(){
    int number;

    for(;;){
        std::cout << "Enter a positive number: ";
        std::cin >> number;
        if (number >= 0) {
            break;
        }
    }
    std::cout << "You entered: " << number << std::endl;
    return 0;
}