#pragma once
#include "GeometeicFigure.h"

class Rectangle :public GeometricFigure {
public:
    Rectangle(double length, double width);
    ~Rectangle() {};

    double GetArea();
    double GetPerimeter();
    std::string GetName()
    {
        return "³¤·½ÐÎ";
    }
};
