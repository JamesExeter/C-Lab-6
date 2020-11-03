//
// Created by james on 16/03/2020.
//
#include "Shape.h"
#include <sstream>
#include <cmath>
#include <iostream>

using namespace std;

Shape::Shape(){}

Shape::~Shape(){}

Circle::Circle(const float &x, const float &y, const float &r) : Shape(), x(x), y(y), r(r) {}

std::string Circle::to_string() const {
    std::stringstream sstr;
    sstr << "Circle centred at (" << this-> x << ", " << this-> y << ") with radius " << this-> r << "...";
    std::string str = sstr.str();
    return str;
}

void Circle::centre_at(float x, float y) {
    this -> x = x;
    this -> y = y;
}

Circle::~Circle(){}

Rectangle::Rectangle(const float &x0, const float &y0, const float &x1, const float &y1) : Shape(), x0(x0), y0(y0), x1(x1), y1(y1) {}

std::string Rectangle::to_string() const {
    std::stringstream sstr;
    float width = this-> x1 - x0;
    float height = this-> y1 - y0;
    sstr << "Rectangle centred at [(" << this-> x0 << ", " << this-> y0 << "), [(" << this-> x1 << ", " << this-> y1
    << ")] with width " << width << ", height " << height << "...";
    std::string str = sstr.str();
    return str;
}

void Rectangle::centre_at(float x, float y) {
    float width = abs(this-> x1 - x0);
    float height = abs(this-> y1 - y0);
    this -> x0 = x - (width / 2);
    this -> x1 = x + (width / 2);
    this -> y0 = y - (height / 2);
    this -> y1 = y + (height / 2);
}

Rectangle::~Rectangle(){}

Triangle::Triangle(const float &x0, const float &y0, const float &x1, const float &y1, const float &x2, const float &y2) : Shape(), x0(x0), y0(y0), x1(x1), y1(y1), x2(x2), y2(y2) {}

std::string Triangle::to_string() const {
    std::stringstream sstr;
    float intermediate_calc;
    float sl1x = x1-x0;
    float sl1y = y1-y0;

    intermediate_calc = pow(sl1x, 2) + pow(sl1y, 2);
    float sl1 = sqrt(intermediate_calc);

    float sl2x = x2-x1;
    float sl2y = y2-y1;
    intermediate_calc = pow(sl2x, 2) + pow(sl2y, 2);
    float sl2 = sqrt(intermediate_calc);

    float sl3x = x2-x0;
    float sl3y = y2-y0;
    intermediate_calc = pow(sl3x, 2) + pow(sl3y, 2);
    float sl3 = sqrt(intermediate_calc);

    sstr << "Triangle centred at [(" << this-> x0 << ", " << this-> y0 << "), (" << this-> x1 << ", " << this-> y1
            << "), (" << this-> x2 << ", " << this-> y2 << ")] with side lengths " << sl1 << ", " << sl2 << " and " << sl3 << "...";
    std::string str = sstr.str();
    return str;
}

void Triangle::centre_at(float x, float y) {
    float current_centre_x = (x0 + x1 + x2) / 3;
    float current_centre_y = (y0 + y1 + y2) / 3;

    float x_change = x - current_centre_x;
    float y_change = y - current_centre_y;

    this -> x0 = this -> x0 + x_change;
    this -> y0 = this -> y0 + y_change;
    this -> x1 = this -> x1 + x_change;
    this -> y1 = this -> y1 + y_change;
    this -> x2 = this -> x2 + x_change;
    this -> y2 = this -> y2 + y_change;
}

Triangle::~Triangle(){}

