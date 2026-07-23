# include <iostream>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    std::cout << "Size of array: " << sizeof(arr) << " bytes" << std::endl;
    std::cout << "Number of elements in array: " << sizeof(arr) / sizeof(arr[0]) << std::endl;
    double gpa[3] = {3.5, 3.8, 4.0};
    std::cout << "Size of gpa array: " << sizeof(gpa) << " bytes" << std::endl;
    std::cout << "Number of elements in gpa array: " << sizeof(gpa) / sizeof(gpa[0]) << std::endl;
    
    return 0;
}