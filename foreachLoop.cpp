# include <iostream>

int main() {
    std::string students [] = {"John", "Jane", "Jack", "Jill", "James"};
    int grades [] = {90, 80, 70, 60, 50};

    for (std::string studnet: students) {
        std::cout << studnet << std::endl;
    }

    for (int grade: grades) {
        std::cout << grade << std::endl;
    }
    return 0;
}