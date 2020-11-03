//
// Created by james on 02/03/2020.
//

#include "cat.h"
#include <iostream>

Cat::Cat(const std::string name, unsigned int lives) : name(name), lives(lives){}

void Cat::set_name(const std::string& new_name)  {
    this->name = new_name;
}

void Cat::set_lives(const unsigned int& new_lives) {
    if (new_lives < this->lives) {
        this->lives = new_lives;
    };
}

std::string Cat::get_name() const {
    return name;
}

unsigned int Cat::get_lives() const {
    return lives;
}

std::ostream& operator<<(std::ostream& os, const Cat &a){
    os << a.name << " has " << a.lives << " lives...";
    return os;
}

bool operator==(const Cat &lhs, const Cat &rhs) {
    return (lhs.name == rhs.name) && (lhs.lives == rhs.lives);
}

bool operator<(const Cat &lhs, const Cat &rhs) {
    if (lhs.name < rhs.name){
        return true;
    } else if (lhs.name == rhs.name){
        return (lhs.lives < rhs.lives);
    } else {
        return false;
    }
}


