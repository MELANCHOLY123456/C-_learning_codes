//
// Created by Administrator on 24-10-23.
//

#include <string>
#include <iostream>
#include <map>
#include <vector>

void add_family(std::map<std::string, std::vector<std::string>>& families,
                const std::string& family_name) {
    if (families.find(family_name) == families.end()) {
        families[family_name] = std::vector<std::string>();
    }
}

void add_child(std::map<std::string, std::vector<std::string>>& families,
               const std::string& family_name, const std::string& child_name) {
    families[family_name].push_back(child_name);
}

int main(int argc, char* argv[]) {
    std::map<std::string, std::vector<std::string>> families;
    add_family(families, "James");
    add_child(families, "James", "Harden");
    add_child(families, "James", "Lebron");
    add_child(families, "James", "Curry");
    add_family(families, "Stephen");

    for (const auto& [fst, snd] : families) {
        std::cout << fst;
        for (const auto& child : snd) {
            std::cout << child;
        }
        std::cout << std::endl;
    }
}
