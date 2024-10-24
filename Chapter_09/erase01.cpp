//
// Created by Administrator on 24-10-19.
//

#include <algorithm>
#include <iostream>
#include <list>
#include <string>

int main(int argc, char* argv[]) {
    std::list<std::string> str_list01;
    std::string str;
    while (std::cin >> str && str != "quit") {
        str_list01.push_back(str);
    }

    // std::list<std::string>::iterator iter = std::find(str_list01.begin(), str_list01.end(), "Quasimodo");
    if (const auto iter = std::find(str_list01.begin(), str_list01.end(), "Quasimodo"); iter != str_list01.end()) {
        str_list01.erase(iter);
    }

    const std::list<std::string> str_list02 = str_list01;
    str_list01.clear();
    std::cout << "str_list01.size():" << str_list01.size() << "\n";

    str_list01 = str_list02;
    str_list01.erase(str_list01.begin(), str_list01.end());
    std::cout << "str_list01.size():" << str_list01.size() << "\n";

    str_list01 = str_list02;
    // std::list<std::string>::iterator elem01 = str_list01.begin();
    auto elem01 = str_list01.begin();
    // std::list<std::string>::iterator elem02 = str_list01.end();
    const auto elem02 = str_list01.end();
    elem01 = str_list01.erase(elem01, elem02);
    std::cout << "str_list01.size():" << str_list01.size() << "\n";

    if (elem01 != elem02) {
        std::cout << "something bad happened\n";
    }
    else {
        std::cout << "okay, they're equal\n";
    }

    return 0;
}
