# include <iostream>

int main(){
    std::string x = "Sprite";
    std::string y = "Coca-cola";

    swap(x, y);

    std::cout<< "X: "<< x <<'\n';
    std::cout<< "Y: "<< y <<'\n';

    return 0;
}

void swap(std::string &x, std::string &y){
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}