# include <iostream>

template <typename T, typename U>
auto max(T a, U b){
    return (a > b) ? a : b;
}

int main (){
    std::cout << max(10, 20) << std::endl; // calls max<int>
    std::cout << max(10.5, 20.5) << std::endl; // calls max<double>
    std::cout << max('A', 'B') << std::endl; // calls max<char>
    return 0;
}