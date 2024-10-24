//
// Created by Administrator on 24-10-19.
//

#include <vector>
#include <iostream>

int main(int argc, char* argv[]) {
    std::vector<int> v;
    for (int i = 0; i != 10; i++) {
        v.push_back(i);
    }
    for (int& i : v) {
        i *= i;
    }
    for (int i = 0; i != 10; i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
