#include "Circle.h"
#include "MathUtils.h"

Circle::Circle(double radius) {
    m_radius = radius;
}

double Circle::GetArea() {
    double pi = MathUtils::GetPiValue();
    double area = pi * m_radius * m_radius;
    return area;
}

double Circle::GetPerimeter() {
    double pi = MathUtils::GetPiValue();
    double perimeter = 2 * pi * m_radius;
    return perimeter;
}
