# include <iostream>

int main() {
    std::string cars[4][3] = {{"Volvo", "BMW", "Ford"}, {"Toyota", "Honda", "Nissan"}, {"Hyundai", "Kia", "Suzuki"}, {"Mazda", "Subaru", "Mitsubishi"}};
    
    std::cout << "The car at row 2, column 1 is: " << cars[2][1] << std::endl;
    std::cout << "The car at row 0, column 2 is: " << cars[0][2] << std::endl;

    int rows = sizeof(cars) / sizeof(cars[0]);
    int cols = sizeof(cars[0]) / sizeof(cars[0][0]);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "Car at row " << i << ", column " << j << ": " << cars[i][j] << std::endl;
        }
    }
    return 0;
}