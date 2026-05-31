# include <iostream>

int main() {
    const double PI = 3.14159; // pi is a constant double
    double radius = 10; 
    double circumference = 2 * PI * radius; // Using the constant PI to calculate circumference

    std::cout << "The circumference is: " << circumference << std::endl;

    return 0;
}