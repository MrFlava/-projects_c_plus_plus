# include <iostream>

int main() {
    int *ptr = nullptr; // Initialize pointer to null
    int x = 123;
    
    ptr = &x; // Assign address of x to pointer
    if(ptr == nullptr) {
        std::cout << "Pointer is null." << std::endl;
    } else {
        std::cout << "Pointer is not null. Value: " << *ptr << std::endl;
        std::cout << "Address of x: " << ptr << std::endl;
    }
    return 0;
}