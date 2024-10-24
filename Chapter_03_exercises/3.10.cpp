//
// Created by Administrator on 24-10-21.
//

#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char* argv[]) {
    std::string input;
    std::cout << "Please enter a string: ";
    std::getline(std::cin, input);
    for (const auto s : input) {
        if (!ispunct(s)) {
            std::cout << s;
        }
    }
    std::cout << std::endl;
    return 0;
}
