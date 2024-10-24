//
// Created by Administrator on 24-10-19.
//

#include <cstdint>
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    std::string str_01("some thing");
    std::string str_02 = str_01;

    if (!str_01.empty()) {
        std::cout << str_01[0] << std::endl;
        str_01[0] = static_cast<char>(toupper(static_cast<unsigned char>(str_01[0])));
        std::cout << str_01 << std::endl;
    }

    if (str_01.begin() != str_01.end()) {
        const auto it = str_01.begin();
        *it = static_cast<char>(toupper(static_cast<unsigned char>(*it)));
        std::cout << str_01 << std::endl;
    }

    for (auto index = 0; index != str_01.size() && !isspace(str_01[index]); index++) {
        str_01[index] = static_cast<char>(toupper(static_cast<unsigned char>(str_01[index])));
    }
    std::cout << str_01 << std::endl;

    for (char& index : str_01) {
        index = static_cast<char>(toupper(static_cast<unsigned char>(index)));
    }
    std::cout << str_01 << std::endl;
}
