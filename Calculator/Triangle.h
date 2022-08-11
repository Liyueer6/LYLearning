#pragma once
#include "GeometeicFigure.h"

class Triangle :public GeometricFigure {
public:
    Triangle(double a, double b, double c);
    ~Triangle() {};

    double GetArea();
    double GetPerimeter();
    std::string GetName()
    {
        return "������";
    }
private:
    double a, b, c;
};
