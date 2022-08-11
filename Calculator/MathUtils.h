#pragma once

class MathUtils {
public:
    static bool IsGreaterThan(double a, double b, double eps = 1e-6);

    static bool CheckTriangle(double a, double b, double c);

    static double GetPiValue();
};