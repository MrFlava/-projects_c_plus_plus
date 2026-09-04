# include <iostream>

enum Day{
    Monday=0,
    Tuesday=1,
    Wednesday=2,
    Thursday=3,
    Friday=4,
    Saturday=5,
    Sunday
};

int main(){
    Day today = Monday;
    std::cout << "Today is " << today << std::endl;
    return 0;
}