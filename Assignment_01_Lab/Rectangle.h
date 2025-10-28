#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle(double l = 0, double w = 0);

    double calculateArea();

    double calculatePerimeter();

    void displayDetails();
};

#endif // RECTANGLE_H
