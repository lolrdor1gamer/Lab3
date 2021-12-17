#pragma once
class Figure
{
protected:
	float m_a;
	float m_b;
	float m_angle;
public:
	virtual float Square() = 0;
	virtual float Perimeter() = 0;
};

