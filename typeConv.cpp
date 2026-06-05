# include <iostream>

int main(){
    int num1 = 10;
    double num2 = 3.14;
    double score = num1/num2 * 1000;
    std::cout << "Value of num1: " << num2 << std::endl;
    std::cout << "Value of score: " << score << std::endl;

    // // Implicit type conversion (num1 is converted to double)
    // double result1 = num1 + num2; // result1 = 10 + 3.14
    // std::cout << "Result of num1 + num2: " << result1 << std::endl;

    // // Explicit type conversion (casting)
    // int result2 = static_cast<int>(num2); // result2 = (int)3.14
    // std::cout << "Result of casting num2 to int: " << result2 << std::endl;

    // return 0;
}