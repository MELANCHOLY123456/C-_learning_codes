//
// Created by Administrator on 24-10-19.
//

#include <vector>
#include <iostream>

int main(int argc, char* argv[]) {
    std::vector<int> i_vec;
    std::cout << "i_vec: size: " << i_vec.size()
        << " capacity: " << i_vec.capacity() << std::endl;

    for (auto index = 0; index != 24; index++) {
        i_vec.push_back(index);
    }
    std::cout << "i_vec: size: " << i_vec.size()
        << " capacity: " << i_vec.capacity() << std::endl;

    i_vec.reserve(50); //
    std::cout << "i_vec: size: " << i_vec.size()
        << " capacity: " << i_vec.capacity() << std::endl;

    while (i_vec.size() != i_vec.capacity()) {
        i_vec.push_back(0);
    }
    std::cout << "i_vec: size: " << i_vec.size()
        << " capacity: " << i_vec.capacity() << std::endl;

    i_vec.push_back(42);
    std::cout << "i_vec: size: " << i_vec.size()
        << " capacity: " << i_vec.capacity() << std::endl;

    return 0;
}
