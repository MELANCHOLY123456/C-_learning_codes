//
// Created by Administrator on 24-10-19.
//

#include <iostream>
#include <vector>
#include <cstddef>

int main(int argc, char* argv[]) {
    std::vector<unsigned> grades; // 存储输入的成绩
    constexpr size_t size = 11; // 区间数量
    unsigned scores[size] = {};
    unsigned grade;

    while (std::cin >> grade && grade != -1) {
        if (grade <= 100) {
            scores[grade / 10]++;
        }
        grades.push_back(grade);
    }
    std::cout << "grades.size = " << grades.size() << std::endl;

    for (const unsigned int index : grades) {
        std::cout << index << " ";
    }
    std::cout << std::endl;

    for (const unsigned int index : scores) {
        std::cout << index << " ";
    }
    std::cout << std::endl;
}
