#ifndef TEMPLATE_RECTANGLE_H
#define TEMPLATE_RECTANGLE_H

#include <iostream>


template <class T>
class TemplateRectangle
{
private:
    T length;
    T width;

public:
    TemplateRectangle(T l = 0, T w = 0) : length(l), width(w) {}

    T calculateArea()
    {
        return length * width;
    }

    T calculatePerimeter()
    {
        return 2 * (length + width);
    }

    void displayDetails()
    {
        std::cout << "--- Template Rectangle Details ---" << std::endl;
        std::cout << "Length: " << length << std::endl;
        std::cout << "Width: " << width << std::endl;
        std::cout << "Area: " << calculateArea() << std::endl;
        std::cout << "Perimeter: " << calculatePerimeter() << std::endl;
        std::cout << "----------------------------------" << std::endl;
    }
};

#endif // TEMPLATE_RECTANGLE_H
