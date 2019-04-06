#include <iostream>
#include <string>

int main () {
    std::string str;
    std::cout << "Hello, what is your name? \n";
    std::cin >> str;
    std:: cout << "Greeting, " << str<< ", from a C++ program \n";

    return 0;
}