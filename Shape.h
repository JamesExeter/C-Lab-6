//
// Created by james on 16/03/2020.
//

#pragma once
#ifndef LAB5_SHAPE_H
#define LAB5_SHAPE_H
#include <string>

class Shape {
public:
    Shape();
    virtual ~Shape();

    virtual std::string to_string() const = 0;
    virtual void centre_at(float x, float y) = 0;
};

class Circle : public Shape {
private:
    float x;
    float y;
    float r;
public:
    Circle(const float &x, const float &y, const float &r);
    virtual ~Circle();

    virtual std::string to_string() const;
    virtual void centre_at(float x, float y);
};

class Rectangle : public Shape {
private:
    float x0;
    float x1;
    float y0;
    float y1;
public:
    Rectangle(const float &x0, const float &y0, const float &x1, const float &y1);
    virtual ~Rectangle();

    virtual std::string to_string() const;
    virtual void centre_at(float x, float y);
};

class Triangle : public Shape {
private:
    float x0;
    float x1;
    float y0;
    float y1;
    float x2;
    float y2;
public:
    Triangle(const float &x0, const float &y0, const float &x1, const float &y1, const float &x2, const float &y2);
    virtual ~Triangle();

    virtual std::string to_string() const;
    virtual void centre_at(float x, float y);
};


#endif //LAB5_SHAPE_H
