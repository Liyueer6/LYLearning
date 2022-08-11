#include "Square.h"
#include <cmath>

Square::Square(double length) {
    m_length = length;
}
double Square::GetArea() {
    double area = pow(m_length, 2);
    return area;
};
double Square::GetPerimeter() {
    double perimeter = 4 * m_length;
    return perimeter;
};
