//
// Created by Administrator on 24-10-21.
//

#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
    std::vector<int> vec;
    int i;
    char cont = 'y';
    while (std::cin >> i && i != -1) {
        vec.push_back(i);
        std::cout << "Continue or not(y or n)?" << std::endl;
        std::cin >> cont;
        if (cont != 'y' && cont != 'n') {
            break;
        }
    }
    for (const auto s : vec) {
        std::cout << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
