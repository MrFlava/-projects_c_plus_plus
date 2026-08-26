# include <iostream>

int main() {
    int* p = new int; // dynamically allocate memory for an integer
    *p = 42; // assign a value to the allocated memory
    std::cout << "Value: " << *p << std::endl; // output the value
    delete p; // free the allocated memory
    return 0;
}