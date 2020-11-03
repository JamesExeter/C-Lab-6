//
// Created by james on 16/03/2020.
//

#include <iostream>
#include "Shape.h"
#include <stdlib.h>

int main (int argc, char* argv []) {
    Shape** shapes = new Shape*[10];

    shapes[0] = new Triangle(0, 0, 1, 1, 2, 0);
    shapes[1] = new Circle(4,4,2);
    shapes[2] = new Rectangle(1,1,3,3);
    shapes[3] = new Circle(5,2,1.5);
    shapes[4] = new Rectangle(-1,0, -3, 2);
    shapes[5] = new Triangle(5,6,5,8,7,9);
    shapes[6] = new Rectangle(0,5,2,8);
    shapes[7] = new Circle(5,5,4);
    shapes[8] = new Triangle(4,2,6,4,7,2);
    shapes[9] = new Circle(-3,-5,6);

    unsigned int ARR_SIZE = 10;
    for (unsigned int i = 0; i < ARR_SIZE; i++){
        std::cout << shapes[i] -> to_string() << std::endl;
    }

    std::cout << "\nMixing up position of shapes" << std::endl;

    for (unsigned int j = 0; j < ARR_SIZE; j++){
        float rand_x = rand() % 21 + (-10);
        float rand_y = rand() % 21 + (-10);
        shapes[j] -> centre_at(rand_x, rand_y);
        std::cout << shapes[j] -> to_string() << std::endl;
        shapes[j] = nullptr;
    }

    delete[] shapes;
    return 0;
}