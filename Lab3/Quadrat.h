#pragma once
#include "Figure.h"
class Quadrat :
    public Figure
{
public:
    Quadrat(float side)
    {
        m_a = side;
        m_b = side;
        m_angle = 90;
    }
    float Square() override;
    float Perimeter() override;
};

