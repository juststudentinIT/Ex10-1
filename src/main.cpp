// Copyright 2021 FOM
#include "postfix.h"
#include <iostream>

int main() {
    std::string str_1 = "1 + 2";
    std::cout << infix2postfix(str_1) << std::endl;
    std::string str_2 = "2 + 6 * 3 / (4 - 2)";
    std::cout << infix2postfix(str_2) << std::endl;
    std::string str_3 = "12 - 6 * 4 - (56 - 9) / (3 + 5)";
    std::cout << infix2postfix(str_3) << std::endl;
    std::string str_4 = "45.67 - 7 / 8 * (4.3 + 8 / 4)";
    std::cout << infix2postfix(str_4) << std::endl;
    std::string str_5 = "((55 + 56) / (88 - 44) + (5 * 7 / 3))";
    std::cout << infix2postfix(str_5) << std::endl;
    std::string str_6 = "1 + 2";
    std::cout << infix2postfix(str_6) << std::endl;
    std::string str_7 = "5 * 8 + 5";
    std::cout << infix2postfix(str_7) << std::endl;
    std::string str_8 = "(67 - 3 * 3 / 8) / (44 + 8 / 5)";
    std::cout << infix2postfix(str_8) << std::endl;
    std::string str_9 = "3 / 2 * 6 ";
    std::cout << infix2postfix(str_9) << std::endl;
    std::string str_10 = "(28 + 25 + 28 + 25) * 20";
    std::cout << infix2postfix(str_10) << std::endl;
    return 0;
}