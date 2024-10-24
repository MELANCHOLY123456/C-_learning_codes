//
// Created by Administrator on 24-10-19.
//

#include <string>
#include <iostream>

int main(int argc, char* argv[]) {
    std::string name("AnnaBelle");
    std::string::size_type pos1 = name.find("Anna");
    std::cout << pos1;

    std::string lowercase("annabelle");
    pos1 = lowercase.find("Anna");
    std::cout << " " << pos1 << std::endl;
    return 0;
}

/*
 * std::string::npos 是一个特殊的常量，定义在 C++ 标准库中的 std::string 类（以及 std::vector、std::list 等容器类）中。
 * 它表示一个无效的位置或无法找到的位置，通常用于表示搜索操作未能成功找到目标的情况。
 */





