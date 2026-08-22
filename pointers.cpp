# include <iostream>

int main() {
    int a = 10;
    int b = 20;
    int* ptrA = &a; // Pointer to a
    int* ptrB = &b; // Pointer to b

    std::cout << "Before swapping:" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;

    // Swap values using pointers
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;

    std::cout << "After swapping:" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;

    std::string name = "John Doe";
    std::string* ptrName = &name; // Pointer to name
    std::cout << "Name: " << *ptrName << std::endl;

    std::string freePizzas[3] = {"Margherita", "Pepperoni", "Hawaiian"};
    std::string* ptrFreePizzas = freePizzas; // Pointer to freePizzas
    std::cout << "Free Pizzas: " << *ptrFreePizzas << std::endl;
    return 0;
}