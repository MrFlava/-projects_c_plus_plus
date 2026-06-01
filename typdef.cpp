# include <iostream>
# include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;

int main()
{  
    text_t text = "Hello, World!";
    number_t number = 42;
    // pairlist_t pairlist;

    std::cout << text << std::endl;
    std::cout << number << std::endl;

    return 0;
}