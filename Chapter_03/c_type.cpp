//
// Created by Administrator on 24-10-19.
//

#include <cctype>
#include <iostream>

int main(int argc, char* argv[]) {
    std::string str_01("Hello World~~~");

    // count the number of punctuation characters in str_01
    int punctuation_num = 0;
    for (const char i : str_01) {
        if (ispunct(i)) {
            punctuation_num++;
        }
    }
    std::cout << punctuation_num << " punctuation characters in " << str_01 << std::endl;

    // convert str_01 to uppercase
    for (char& c : str_01) {
        c = static_cast<char>(toupper(static_cast<unsigned char>(c)));
    }
    std::cout << str_01 << std::endl;

    std::string::size_type index = 0;
    while (index != str_01.size() && !isspace(str_01[index])) {
        str_01[index] = static_cast<char>(toupper(static_cast<unsigned char>(str_01[index])));
        index++;
    }
    std::cout << str_01 << std::endl;
}
