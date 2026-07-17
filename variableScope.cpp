# include <iostream>

int myNum = 10;

void myFunction();

int main() {
    int myNum = 20;
    std::cout << "myNum: " << myNum << std::endl;
    myFunction();
    return 0;
}

void myFunction() {
    int myNum = 30;
    std::cout << "myNum: " << myNum << std::endl;
}