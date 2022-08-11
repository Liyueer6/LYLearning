#pragma once
#include "GeometeicFigure.h"

class Square :public GeometricFigure {
public:
    Square(double length);
    ~Square() {};

    double GetArea();
    double GetPerimeter();
    std::string GetName()
    {
        return "Õý·½ÐÎ";
    }
};
