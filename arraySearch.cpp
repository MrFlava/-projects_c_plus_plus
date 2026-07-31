# include <iostream>

int searchArray(int arr[], int size, int target);

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int index;
    int mynumber;

    std::cout << "Enter a number to search for: ";
    std::cin >> mynumber;

    return 0;
}


int searchArray(int arr[], int size, int mynumber) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] == mynumber) {
            std::cout << "Number " << mynumber << " found at index " << i << std::endl;
            found = true;
            break;
        }
    }
    if (!found) {
        std::cout << "Number " << mynumber << " not found in the array." << std::endl;
    }
}
