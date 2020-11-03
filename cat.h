//
// Created by james on 02/03/2020.
//
#pragma once
#ifndef LAB4_CAT_H
#define LAB4_CAT_H
#include <string>

class Cat {

private:
    std::string name;
    unsigned int lives;
public:
    Cat(std::string name);
    Cat(std::string name, unsigned int lives);
    Cat();
    ~Cat();

    void set_name(const std::string& name);
    void set_lives(const unsigned int& lives);
    std::string get_name () const;
    unsigned int get_lives() const;
};

#endif //LAB4_CAT_H
