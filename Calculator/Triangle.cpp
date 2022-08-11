#include "Triangle.h"
#include <cmath>

Triangle::Triangle(double a, double b, double c) {
    this->a = a;
    this->b = b;
    this->c = c;
};
double Triangle::GetArea() {
    double  p = 0.5 * (a + b + c);
    double area2 = p * (p - a) * (p - b) * (p - c);
    area2 = (area2 > 0) ? area2 : 0;

    double area = sqrt(area2);
    return area;
}
double Triangle::GetPerimeter() {
    double perimeter = a + b + c;
    return perimeter;
}