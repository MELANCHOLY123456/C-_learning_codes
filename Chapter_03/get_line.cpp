//
// Created by Administrator on 24-10-19.
//

#include <string>
#include <iostream>

int main(int argc, char* argv[]) {
    std::string line;

    // read input a line at a time until end-of-file
    while (getline(std::cin, line))
        std::cout << line << std::endl;
    return 0;
}
