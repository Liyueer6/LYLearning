#include "Rectangle.h"

Rectangle::Rectangle(double length, double width) {
    m_length = length;
    m_width = width;
}

double Rectangle::GetArea() {
    double area;
    area = m_length * m_width;
    return area;
};

double Rectangle::GetPerimeter() {
    double perimeter;
    perimeter = 2 * (m_width + m_length);
    return perimeter;
}
