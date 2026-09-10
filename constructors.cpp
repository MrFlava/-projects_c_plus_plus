# include <iostream>

class Studnet{
    public:
        std::string name;
        int age;
        float height;
        float weight;
        std::string gender;
    
    Studnet(std::string n, int a, float h, float w, std::string g){
        name = n;
        age = a;
        height = h;
        weight = w;
        gender = g;
        std::cout << "Constructor called!" << std::endl;
    }
};

int main(){
    Studnet studnet1("John", 20, 5.9, 160.5, "Male");
    std::cout << "Name: " << studnet1.name << std::endl;
    std::cout << "Age: " << studnet1.age << std::endl;
    std::cout << "Height: " << studnet1.height << std::endl;
    std::cout << "Weight: " << studnet1.weight << std::endl;
    std::cout << "Gender: " << studnet1.gender << std::endl;
    return 0;
}