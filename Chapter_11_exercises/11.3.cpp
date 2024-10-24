//
// Created by Administrator on 24-10-23.
//

#include <fstream>
#include <string>
#include <iostream>
#include <map>

std::string& trans(std::string& s) {
    for (int p = 0; p < s.size(); p++) {
        if (s[p] >= 'A' && s[p] <= 'Z') {
            s[p] -= 'A' - 'a';
        } else if (s[p] == ',' || s[p] == '.') {
            s.erase(p, 1);
        }
    }
    return s;
}

int main(int argc, char* argv[]) {
    std::ifstream in(argv[1]);
    if (!in) {
        std::cout << "Fail to open the file~" << std::endl;
        exit(1);
    }

    std::map<std::string, size_t> word_count;
    std::string word;
    while (in >> word) {
        word_count[word]++;
        for (const auto& [fst, snd] : word_count) {
            std::cout << fst << "occurs " << snd << " times" << std::endl;
        }
    }
    return 0;
}
