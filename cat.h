//
// Created by james on 02/03/2020.
//
#pragma once
#ifndef LAB4_CAT_H
#define LAB4_CAT_H
#include <sstream>
#include <iostream>


class Cat {
private:
    std::string name;
    unsigned int lives;
public:
    Cat(std::string name, unsigned int lives);

    void set_name(const std::string& name);
    void set_lives(const unsigned int& lives);
    std::string get_name () const;
    unsigned int get_lives() const;
    friend std::ostream& operator<<(std::ostream& os, const Cat &a);
    friend bool operator==(const Cat &lhs, const Cat &rhs);
    friend bool operator<(const Cat &lhs, const Cat &rhs);
};

namespace std {
    template <>
    struct hash<Cat> {
        size_t operator() (const Cat &obj) const {
            std::stringstream cat_stream;
            cat_stream << &obj;
            //Using the ostream generated from <<, convert it to a stringstream to be used to generate a unique hash for the instance
            return std::hash<std::string>()(cat_stream.str());
        }
    };
}

#endif //LAB4_CAT_H
