//
// Created by Administrator on 24-10-19.
//

#include <string>
#include <iostream>
#include <cstring>

int main(int argc, char* argv[]) {
    const std::string s1 = "A string example";
    const std::string s2 = "A different string";

    if (s1 < s2) {
        std::cout << s1 << std::endl;
    }
    else {
        std::cout << s2 << std::endl;
    }

    // s1 > s2
    constexpr char array01[] = "A string example";
    constexpr char array02[] = "A different string";

    if (strcmp(array01, array02) < 0) {
        std::cout << array01 << std::endl;
    }
    else {
        std::cout << array02 << std::endl;
    }

    const char* pointer01 = array01;
    const char* pointer02 = array02;
    std::cout << strcmp(pointer01, pointer02) << std::endl;
    std::cout << strcmp(pointer02, pointer01) << std::endl;
    std::cout << strcmp(pointer01, pointer01) << std::endl;

    std::cout << strlen(pointer01) << std::endl;

    constexpr unsigned size = 16 + 18 + 2;
    char largeStr[size];
    strcpy(largeStr, array01);
    strcat(largeStr, " ");
    strcat(largeStr, array02);
    std::cout << largeStr << std::endl;

    strncpy(largeStr, array01, size);
    if (strlen(array01) > size) {
        largeStr[size - 1] = '\0';
    }
    strncat(largeStr, " ", 2);
    strncat(largeStr, array02, size - strlen(array02));
    std::cout << largeStr << std::endl;

    const std::string s3 = s1 + " " + s2;
    std::cout << s3 << std::endl;
}
