//
// Created by james on 23/03/2020.
//

#include <iostream>
#include "cat.h"

int main(int argc, char* argv[]) {
    Cat a("Garfield", 42);
    std::cout << std::hash<Cat>()(a)
              << " = " << a << std::endl;

    return 0;
}
