#pragma once
#include "GeometeicFigure.h"

class Circle :public GeometricFigure {
public:
    Circle(double radius);
    ~Circle() {};
    double GetArea();
    double GetPerimeter();
    std::string GetName()
    {
        return "т╡пн";
    }
};