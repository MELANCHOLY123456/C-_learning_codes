//
// Created by Administrator on 24-10-23.
//

#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>

std::string& trans(std::string& s) {
    for (int p = 0; p < s.size(); p++) {
        if (s[p] >= 'A' && s[p] <= 'Z') {
            s[p] -= 'A' - 'a';
        } else if (s[p] == ',' && s[p] <= '.') {
            s.erase(p, 1);
        }
    }
    return s;
}

int main(int argc, char* argv[]) {
    std::ifstream in(argv[1]);
    if (!in) {
        std::cerr << "Error opening file " << std::endl;
        exit(1);
    }

    std::vector<std::string> unique_word;
    std::string word;
    while (in >> word) {
        trans(word);
        // 如果没找到就往容器中添加该元素
        if (std::find(unique_word.begin(), unique_word.end(), word) == unique_word.end()) {
            unique_word.push_back(word);
        }
    }
    for (auto& w : unique_word) {
        std::cout << w << " " << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
