//
// Created by Administrator on 24-10-21.
//

#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    for (auto& c : s) {
        c = 'X';
    }
    std::cout << s << std::endl;
    return 0;
}
