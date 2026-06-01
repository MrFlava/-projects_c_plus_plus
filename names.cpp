# include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main()
{   
    int x = 0;
    
    std::cout << "x = " << x << std::endl;
    std::cout << "x = " << first::x << std::endl;
    std::cout << "x = " << x << std::endl;
    return 0;
}