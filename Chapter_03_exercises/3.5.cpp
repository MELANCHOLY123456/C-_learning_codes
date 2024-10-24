//
// Created by Administrator on 24-10-20.
//

#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    char cont = 'y';
    std::string str, res;
    while (std::cin >> str) {
        if (res.empty()) {
            res += str;
        } else {
            res += " " + str;
        }
        std::cout << "是否继续（y or n）？" << std::endl;
        std::cin >> cont;
        if (cont == 'y') {
            std::cout << "请输入下一个字符串: " << std::endl;
        } else {
            break;
        }
    }
    std::cout << res << std::endl;
    return 0;
}

