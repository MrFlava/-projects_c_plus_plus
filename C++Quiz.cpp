# include <iostream>

int main() {
    std::string questions [] = {
        "What year was C++ created?",
        "Who is the creator of C++?",
        "What is the latest version of C++?",
        "what is the difference between C and C++?", 
        "What is the difference between C++ and Java?"
    };

    std::string options [5][4] = {
        {"1979", "1983", "1991", "2000"},
        {"Bjarne Stroustrup", "James Gosling", "Dennis Ritchie", "Guido van Rossum"},
        {"C++11", "C++14", "C++17", "C++20"},
        {"C is a procedural programming language, while C++ is an object-oriented programming language.", 
         "C is a low-level programming language, while C++ is a high-level programming language.", 
         "C is a compiled language, while C++ is an interpreted language.", 
         "C is a statically typed language, while C++ is a dynamically typed language."},
        {"C++ is a statically typed language, while Java is a dynamically typed language.", 
         "C++ is a compiled language, while Java is an interpreted language.", 
         "C++ supports multiple inheritance, while Java does not.", 
         "C++ has pointers, while Java does not."}
    };

    int answers [] = {2, 0, 3, 0, 2};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;

    for (int i = 0; i < size; i++) {
        std::cout << questions[i] << std::endl;
        for (int j = 0; j < 4; j++) {
            std::cout << options[i][j] << std::endl;
        }
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        if (guess == 'a' + answers[i]) {
            score++;
        }
    }
    std::cout << "Your score is: " << score << "/" << size << std::endl;
    return 0;
}