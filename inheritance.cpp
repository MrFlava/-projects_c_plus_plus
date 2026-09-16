# include <iostream>

class Animal{
    public:
        bool alive = true;
    
    void eat(){
        std::cout << "Animal is eating" << std::endl;
    }
};

class Dog : public Animal{
    public:
        void bark(){
            std::cout << "Dog is barking" << std::endl;
        }
};

class Cat : public Animal{
    public:
        void meow(){
            std::cout << "Cat is meowing" << std::endl;
        }
};

int main(){
    Dog dog;
    dog.eat();
    dog.bark();

    Cat cat;
    cat.eat();
    cat.meow();

    return 0;
}