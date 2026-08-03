# include <iostream>

int main() {
    std::string foods[100];

    fill(foods, foods + 100, "pizza");

    for (int i = 0; i < 100; i++) {
        std::cout << foods[i] << std::endl;
    }

    return 0;
}