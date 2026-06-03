# include <iostream>

int main(){
    int students = 30;

    students += 5; // students = students + 5
    std::cout << "After adding 5 students: " << students << std::endl;

    students -= 3; // students = students - 3
    std::cout << "After removing 3 students: " << students << std::endl;

    students *= 2; // students = students * 2
    std::cout << "After doubling the number of students: " << students << std::endl;

    students /= 4; // students = students / 4
    std::cout << "After dividing by 4: " << students << std::endl;


    int remainder = students % 3; // remainder = students % 3
    std::cout << "Remainder when students is divided by 3: " << remainder << std::endl;

    int student1 = 6 - 5 + 4 * 2; // student1 = 6 - 5 + 4 * 2
    std::cout << "Result of 6 - 5 + 4 * 2: " << student1 << std::endl;

    return 0;
}