# include <iostream>

int main(){
    std::string students [] = {"John", "Jane", "Jack", "Jill", "James"};
    char grades [] = {'A', 'B', 'C', 'D', 'F'};

    for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++){
        std::cout << students[i] << std::endl;
    }
    for (int i = 0; i < sizeof(grades)/sizeof(grades[0]); i++){
        std::cout << grades[i] << std::endl;
    }
    return 0;
}