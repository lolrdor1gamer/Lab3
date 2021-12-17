#include "Paralelogram.h"

float Paralelogram::Square()
{
    return m_a*m_b*m_angle;
}

float Paralelogram::Perimeter()
{
    return 2*m_a+2*m_b;
}
