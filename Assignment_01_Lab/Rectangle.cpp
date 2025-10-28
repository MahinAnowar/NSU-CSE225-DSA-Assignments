#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(double l, double w) : length(l), width(w) {}

double Rectangle::calculateArea()
{
    return length * width;
}

double Rectangle::calculatePerimeter()
{
    return 2 * (length + width);
}

void Rectangle::displayDetails()
{
    std::cout << "--- Rectangle Details ---" << std::endl;
    std::cout << "Length: " << length << std::endl;
    std::cout << "Width: " << width << std::endl;
    std::cout << "Area: " << calculateArea() << std::endl;
    std::cout << "Perimeter: " << calculatePerimeter() << std::endl;
    std::cout << "-------------------------" << std::endl;
}
