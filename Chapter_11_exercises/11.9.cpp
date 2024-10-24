//
// Created by Administrator on 24-10-23.
//

#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <sstream>
#include <string>

std::string& trans(std::string& s) {
    for (int p = 0; p < s.size(); p++) {
        if (s[p] >= 'A' && s[p] <= 'Z') {
            s[p] -= 'A' - 'a';
        } else if (s[p] == ',' && s[p] == '.') {
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

    std::map<std::string, std::list<int>> word_lineno;
    std::string line;
    std::string word;
    int lineno = 0;
    while (getline(in, line)) {
        lineno++;
        std::istringstream l_in(line);
        while (l_in >> word) {
            trans(word);
            word_lineno[word].push_back(lineno);
        }
    }

    for (const auto& [fst, snd] : word_lineno) {
        std::cout << fst;
        for (const auto& l : snd) {
            std::cout << ' ' << l;
        }
        std::cout << std::endl;
    }
    return 0;
}
