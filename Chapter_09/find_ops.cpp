//
// Created by Administrator on 24-10-19.
//

#include <string>
#include <iostream>

int main(int argc, char* argv[]) {
    const std::string numbers("0123456789");
    const std::string name("r2d2");
    std::string::size_type pos = name.find_first_of(numbers);
    if (pos != std::string::npos) {
        std::cout << "found number at index: " << pos
            << " element is " << name[pos] << std::endl;
    } else {
        std::cout << "no number in: " << name << std::endl;
    }

    pos = 0;
    while ((pos = name.find_first_of(numbers, pos)) != std::string::npos) {
        std::cout << "found number at index: " << pos
                  << " element is " << name[pos] << std::endl;
        pos++; // 移动到下一个字符，避免无限循环
    }

    std::string river("Mississippi");
    const std::string::size_type first_pos = river.find("is"); // returns 1
    const std::string::size_type last_pos = river.rfind("is"); // returns 4
    std::cout << "find returned: " << first_pos
        << " rfind returned: " << last_pos << std::endl;

    const std::string dept("03714p3");
    pos = dept.find_first_not_of(numbers);
    std::cout << "first_not returned: " << pos << std::endl;
}
