# include <iostream>

class Human{
    public:
        std::string name;
        int age;
        float height;
        float weight;
        std::string gender;

        void eat(){
            std::cout << name << " is eating." << std::endl;
        }
        void drink(){
            std::cout << name << " is drinking." << std::endl;
        }
        void sleep(){
            std::cout << name << " is sleeping." << std::endl;
        }
};

class Car{
    public:
        std::string brand;
        std::string model;
        std::string color;
        int year;
        float price;

        void start(){
            std::cout << brand << " " << model << " is starting." << std::endl;
        }
        void stop(){
            std::cout << brand << " " << model << " is stopping." << std::endl;
        }
        void honk(){
            std::cout << brand << " " << model << " is honking." << std::endl;
        }
};

int main(){
    Human h1;
    Human h2;

    h1.name = "John";
    h1.age = 30;
    h1.height = 5.9;
    h1.weight = 160.5;
    h1.gender = "Male";

    h2.name = "Jane";
    h2.age = 28;
    h2.height = 5.5;
    h2.weight = 130.2;
    h2.gender = "Female";

    h1.eat();
    h1.drink();
    h1.sleep();

    h2.eat();
    h2.drink();
    h2.sleep();

    Car c1;
    Car c2;

    c1.brand = "Toyota";
    c1.model = "Camry";
    c1.color = "Blue";
    c1.year = 2020;
    c1.price = 25000.0;
    
    c2.brand = "Honda";
    c2.model = "Civic";
    c2.color = "Red";
    c2.year = 2019;
    c2.price = 20000.0;

    c1.start();
    c1.stop();
    c1.honk();

    c2.start();
    c2.stop();
    c2.honk();

    return 0;
}