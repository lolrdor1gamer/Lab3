#include "Rhombus.h"

float Rhombus::Square()
{
    return m_a*m_a*sin(m_angle * M_PI / 180);
}

float Rhombus::Perimeter()
{
    return m_a*4;
}
