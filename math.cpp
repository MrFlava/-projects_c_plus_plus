# include <iostream>

int main() {
    double x = 3;
    double y = 4;
    double z;

    // z = std::max(x, y);
    // std::cout << "The maximum of " << x << " and " << y << " is " << z << std::endl;
    // z = pow(x, y);
    // std::cout << x << " raised to the power of " << y << " is " << z << std::endl;
    z = sqrt(x*x + y*y);
    std::cout << "The length of the hypotenuse of a right triangle with sides " << x << " and " << y << " is " << z << std::endl;
    return 0;

}