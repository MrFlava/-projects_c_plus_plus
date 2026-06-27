# include <iostream>

int main()
{
    double temp;
    char unit;
    std::cout << "********* Temperature Converter ********* \n" << std::endl;
    std::cout << "This program converts temperatures between Celsius and Fahrenheit." << std::endl;
    std::cout << "You can enter the temperature followed by the unit (C for Celsius, F for Fahrenheit)." << std::endl;
    std::cout << "Enter unit (C or F): ";
    std::cin >> unit;

    if (unit == 'C' || unit == 'c') {
        std::cout << "Enter temperature in Celsius: ";
        std::cin >> temp;
        double tempF = (temp * 9.0 / 5.0) + 32.0;
        std::cout << temp << " degrees Celsius is equal to " << tempF << " degrees Fahrenheit." << std::endl;
    } else if (unit == 'F' || unit == 'f') {
        std::cout << "Enter temperature in Fahrenheit: ";
        std::cin >> temp;
        double tempC = (temp - 32.0) * 5.0 / 9.0;
        std::cout << temp << " degrees Fahrenheit is equal to " << tempC << " degrees Celsius." << std::endl;
    } else {
        std::cout << "Invalid unit entered. Please use 'C' for Celsius or 'F' for Fahrenheit." << std::endl;
    }
}