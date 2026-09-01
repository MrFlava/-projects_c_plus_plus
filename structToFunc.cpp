# include <iostream>

struct Car{

    std::string brand;
    std::string model;
    std::string color;
    int year;
    float price;
};

void printCar(Car &car);

void paintCar(Car &car, std::string newColor);

int main () {
    Car c1 = {"Toyota", "Camry", "Blue", 2020, 25000.0};
    Car c2 = {"Honda", "Civic", "Red", 2019, 20000.0};

    printCar(c1);
    printCar(c2);
    
    paintCar(c1, "Black");
    printCar(c1);
    return 0;
}

void printCar(Car &car){
    std::cout << "Brand: " << car.brand << std::endl;
    std::cout << "Model: " << car.model << std::endl;
    std::cout << "Color: " << car.color << std::endl;
    std::cout << "Year: " << car.year << std::endl;
    std::cout << "Price: $" << car.price << std::endl;

}

void paintCar(Car &car, std::string newColor){
    car.color = newColor;
}