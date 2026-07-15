# include <iostream>

void bakePizza();
void bakePizza(double size, std::string crustType);

int main() {
    bakePizza(12, "thin");
    // int a = 5;
    // double b = 3.14;
    // std::cout << "Integer: " << a << std::endl;
    // std::cout << "Double: " << b << std::endl;
    return 0;
}


void bakePizza() {
    std::cout << "Baking a pizza of size." << std::endl;
}

void bakePizza(double size, std::string crustType) {
    std::cout << "Baking a " << crustType << " pizza of size " << size << " inches." << std::endl;
}