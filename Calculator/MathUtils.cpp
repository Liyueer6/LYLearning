#include "MathUtils.h"

bool MathUtils::IsGreaterThan(double a, double b, double eps)
{
    if (a - b > eps)
    {
        return true;
    }
    return false;
}

bool MathUtils::CheckTriangle(double a, double b, double c)
{
    if (IsGreaterThan(a + b, c) && IsGreaterThan(a + c, b) && IsGreaterThan(b + c, a))
    {
        return true;
    }

    return false;
}

double MathUtils::GetPiValue()
{
    return 3.1415927;
}
