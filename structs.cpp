#include <iostream>

struct student {
    std::string name;
    int age;
    float gpa;
    bool enrolled;
};

int main() {
    student s1 = {"John Doe", 20, 3.5, true};
    std::cout << "Name: " << s1.name << std::endl;
    std::cout << "Age: " << s1.age << std::endl;
    std::cout << "GPA: " << s1.gpa << std::endl;
    std::cout << "Enrolled: " << (s1.enrolled ? "Yes" : "No") << std::endl; 

    student s2 = {"Jane Smith", 22, 3.8, false};
    std::cout << "Name: " << s2.name << std::endl;
    std::cout << "Age: " << s2.age << std::endl;
    std::cout << "GPA: " << s2.gpa << std::endl;
    std::cout << "Enrolled: " << (s2.enrolled ? "Yes" : "No") << std::endl;

    return 0;
}