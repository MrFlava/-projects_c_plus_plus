# include <iostream>

double square(double a) {
    double result = a * a;
    return result;
}

int main() {
    double a = 5.0;
    double result = square(a);
    std::cout << "Square: " << result << std::endl;
    return 0;
}