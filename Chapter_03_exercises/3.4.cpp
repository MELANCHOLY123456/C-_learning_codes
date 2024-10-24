//
// Created by Administrator on 24-10-20.
//

#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    std::string s1, s2;
    std::cin >> s1 >> s2;

    // 比较字符串大小
    if (s1 == s2) {
        std::cout << s1 << " is equal to " << s2 << std::endl;
    } else if (s1 < s2) {
        std::cout << s1 << " is less than " << s2 << std::endl;
    } else {
        std::cout << s1 << " is greater than " << s2 << std::endl;
    }

    // 比较字符串长度
    const size_t length01 = s1.length();
    const size_t length02 = s2.length();
    if (length01 == length02) {
        std::cout << s1 << " is equal to " << s2 << std::endl;
    } else if (length01 < length02) {
        std::cout << s1 << " is less than " << s2 << std::endl;
    } else {
        std::cout << s1 << " is greater than " << s2 << std::endl;
    }

    return 0;
}
