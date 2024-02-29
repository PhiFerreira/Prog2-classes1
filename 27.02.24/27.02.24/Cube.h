#pragma once
#include <iostream>
class Cube
{
public:
	explicit Cube(double side);
	double volume();
	bool hasLargerVolumeThan(Cube other_cube);

private:
	double m_side;

};

