//
// Created by Administrator on 24-10-23.
//

#include <fstream>
#include <iostream>
#include <set>
#include <string>

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

    std::set<std::string> unique_word;
    std::string word;
    while (in >> word) {
        trans(word);
        unique_word.insert(word);
    }
    for (auto& w : unique_word) {
        std::cout << w << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
