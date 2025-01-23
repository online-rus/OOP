/* ЗЗадание 6
Изменить программу предыдущего задания, организовав на основе существующего класса производный класс. Производный класс также должен содержать не менее двух конструкторов.
Исходная программа должна содержаться в двух файлах. В первом описание классов, во втором – реализация, т.е. работа с объектами. Продемонстрировать работу всех методов базового и производного классов. Организовать производный класс, содержащий дополнительно функцию нахождения высот треугольника в любом варианте.
*/



#include <iostream>
#include <cmath>
#include <windows.h>
#include "triangle.h"


int main() {
    SetConsoleOutputCP(CP_UTF8);  // Устанавливаем кодировку консоли в UTF-8
    std::locale::global(std::locale(""));  // Устанавливаем локаль по умолчанию
    std::wcout.imbue(std::locale());       // Устанавливаем локаль для wcout


    // Создание объекта базового класса
    Triangle triangle(3, 4, 5);
    triangle.print();
    std::cout << "Perimeter: " << triangle.perimeter() << std::endl;
    std::cout << "Area: " << triangle.area() << std::endl;

    // Создание объекта производного класса
    TriangleWithHeights triangleWithHeights(6, 8, 10);
    triangleWithHeights.print();
    std::cout << "Perimeter: " << triangleWithHeights.perimeter() << std::endl;
    std::cout << "Area: " << triangleWithHeights.area() << std::endl;
    triangleWithHeights.printHeights();

    return 0;
}

