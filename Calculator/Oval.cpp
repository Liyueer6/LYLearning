#include "Oval.h"
#define PI 3.1415927

Oval::Oval(double x, double y) {
    hx = x;
    hy = y;
}
double Oval::GetArea() {
    double area = PI * hx * hy;
    return area;
}
double Oval::GetPerimeter() {
    double perimter = 2 * PI * hy + 4 * (hx - hy);
    return perimter;
}