//
// Created by james on 02/03/2020.
//

#include "cat.h"
#include <iostream>

int main(int argc, char* argv[]){
    if (argc % 2 != 0) {
        argc = argc - 1;
    }

    unsigned int ARRAY_SIZE = argc / 2;
    unsigned int num_cats = 0;
    Cat* cats = new Cat[ARRAY_SIZE];

    std::cout << "Allocating clowder of size " << ARRAY_SIZE << std::endl;

    for (int i = 1; i < argc; i += 2){
        if (argv[i+1] != nullptr){
            cats[num_cats] = Cat(argv[i], atoi(argv[i+1]));
        } else {
            cats[num_cats] = Cat(argv[i]);
        }
        num_cats++;
    }

    for (int i = 0; i < num_cats; i++) {
        std::cout << cats[i].get_name() << " has "
                  << cats[i].get_lives() << " lives." << std::endl;
    }

    delete[] cats;

    return 0;
}
