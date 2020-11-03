//
// Created by james on 02/03/2020.
//

#include "cat.h"
#include <iostream>

Cat::Cat(const std::string name) : name(name), lives(9){
    std::cout << "Constructor called with name..." << std::endl;
}

Cat::Cat(const std::string name, unsigned int lives) : name(name), lives(lives){
    std::cout << "Constructor called with name and lives..." << std::endl;
}

Cat::Cat() : name("Tom"), lives(9){
    std::cout << "Default constructor called..." << std::endl;
}

Cat::~Cat(){
    std::cout << "Destructor called..." << std::endl;
}

void Cat::set_name(const std::string& new_name)  {
    std::cout << "set_name called..." << std::endl;
    this->name = new_name;
}

void Cat::set_lives(const unsigned int& new_lives) {
    std::cout << "set_lives called..." << std::endl;
    if (new_lives < this->lives) {
        this->lives = new_lives;
        if (this->lives == 0){
            std::string new_name = "The Cat formerly known as " + Cat::get_name();
            Cat::set_name(new_name);
        }
    };
}

std::string Cat::get_name() const {
    return name;
}

unsigned int Cat::get_lives() const {
    return lives;
}