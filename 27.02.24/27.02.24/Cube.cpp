#include "Cube.h"

Cube::Cube(double side)
	:m_side{ side }
{
	std::cout << "Cube constructor called" << std::endl;
}

double Cube::volume()
{
	return m_side * m_side * m_side;

}

bool Cube::hasLargerVolumeThan(Cube other_cube)
{
	return volume() > other_cube.volume();
}
