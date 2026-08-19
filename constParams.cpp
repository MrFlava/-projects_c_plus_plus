# include <iostream>

void printInfo(const std::string name, const int age, const std::string city);

int main() {
    std::string name ="John Doe";
    int age = 30;
    std::string city = "New York";

    printInfo(name, age, city);
    return 0;
}

void printInfo(const std::string name, const int age, const std::string city) {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "City: " << city << std::endl;
}