# include <iostream>
# include <string>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    arr[2] = 10; // change the value of the third element
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }
    
    std::cout << std::endl;
    return 0;
}
