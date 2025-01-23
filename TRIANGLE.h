#pragma once

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
#include <cmath>

class Triangle {
protected:
    double a, b, c; // Стороны треугольника

public:
    // Конструкторы
    Triangle() : a(0), b(0), c(0) {}
    Triangle(double a, double b, double c) : a(a), b(b), c(c) {}

    // Методы
    double perimeter() const {
        return a + b + c;
    }

    double area() const {
        double p = perimeter() / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }

    void print() const {
        std::cout << "Triangle with sides: a = " << a << ", b = " << b << ", c = " << c << std::endl;
    }
};

class TriangleWithHeights : public Triangle {
public:
    // Конструкторы
    TriangleWithHeights() : Triangle() {}
    TriangleWithHeights(double a, double b, double c) : Triangle(a, b, c) {}

    // Метод для нахождения высот треугольника
    void printHeights() const {
        double areaValue = area();
        std::cout << "Heights of the triangle:" << std::endl;
        std::cout << "Height to side a: " << (2 * areaValue) / a << std::endl;
        std::cout << "Height to side b: " << (2 * areaValue) / b << std::endl;
        std::cout << "Height to side c: " << (2 * areaValue) / c << std::endl;
    }
};

#endif // TRIANGLE_H