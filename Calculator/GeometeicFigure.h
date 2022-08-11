#pragma once
#include <string>

class GeometricFigure {
public:
    GeometricFigure() {};
    ~GeometricFigure() {};

    virtual double GetArea() = 0;
    virtual double GetPerimeter() = 0;
    virtual std::string GetName() = 0;

protected:
    double m_length;
    double m_width;
    double m_radius;
};
