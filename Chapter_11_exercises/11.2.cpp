//
// Created by Administrator on 24-10-23.
//

#include <fstream>
#include <string>
#include <iostream>
#include <map>

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
