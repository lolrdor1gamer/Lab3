#pragma once
#include "Figure.h"
class Paralelogram :
    public Figure
{
public:
    Paralelogram(float side, float side2, float angle)
    {
        m_a = side;
        m_b = side2;
        m_angle = angle;
    }
    float Square() override;
    float Perimeter() override;
};

