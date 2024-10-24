//
// Created by Administrator on 24-10-19.
//

#include <forward_list>
#include <iostream>
#include <list>

int main(int argc, char* argv[]) {
    int temp[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::forward_list<int> lst(temp, temp + std::size(temp));

    std::cout << "initial list: ";
    for (const int& it01 : lst) {
        std::cout << it01 << " ";
    }
    std::cout << std::endl;

    auto prev = lst.before_begin();
    auto curr = lst.begin();
    while (curr != lst.end()) {
        if (*curr % 2 == 0) {
            curr = lst.erase_after(prev);
        }
        else {
            prev = curr;
            ++curr;
        }
    }

    std::cout << "after erasing odd elements from list: ";
    for (const int& it02 : lst) {
        std::cout << it02 << " ";
    }
    std::cout << std::endl;

    return 0;
}
