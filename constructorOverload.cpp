# include <iostream>

class Pizza {
    public:
        int size;
        double price;
        std::string name;
        std::string ingredients;
    Pizza() { 
        size = 0;
        price = 0.0;
        name = "";
        ingredients = "";
    };
    Pizza(int s, double p, std::string n, std::string i) { 
        size = s;
        price = p;
        name = n;
        ingredients = i;
    };
};

int main() {
    Pizza pizza1(12, 15.99, "Margherita", "Tomato, Mozzarella, Basil");
    Pizza pizza2(16, 19.99, "Pepperoni", "Tomato, Mozzarella, Pepperoni");
    Pizza pizza3(14, 17.99, "Vegetarian", "Tomato, Mozzarella, Bell Peppers, Olives");

    std::cout << "Pizza 1: " << pizza1.name << ", Size: " << pizza1.size << ", Price: $" << pizza1.price << ", Ingredients: " << pizza1.ingredients << std::endl;
    std::cout << "Pizza 2: " << pizza2.name << ", Size: " << pizza2.size << ", Price: $" << pizza2.price << ", Ingredients: " << pizza2.ingredients << std::endl;
    std::cout << "Pizza 3: " << pizza3.name << ", Size: " << pizza3.size << ", Price: $" << pizza3.price << ", Ingredients: " << pizza3.ingredients << std::endl;

    return 0;
}