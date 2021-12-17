#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include "Figure.h"
class Rhombus :
    public Figure
{
private:

public:
    Rhombus(float side, float angle)
    {
        m_a = side;
        m_b = side;
        m_angle = angle;
    }
    float Square() override;
    float Perimeter() override;

};

