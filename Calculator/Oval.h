#pragma once
#include "GeometeicFigure.h"

class Oval :public GeometricFigure {
public:
    Oval(double x,double y);
    ~Oval() {};
    double GetArea();
    double GetPerimeter();
    std::string GetName()
    {
        return "Õ÷‘≤–Œ";
    }

private:
    double hx, hy;
};
