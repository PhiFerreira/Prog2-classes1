#include "Box.h"

Box::Box(double length, double width, double height) 
	:m_length{length}, m_width{width}, m_height{height}
{
	std::cout << "Box constructor called" << std::endl;
	s_object_count++;
	//m_length = length;
	//m_width = width;
	//m_height = height;
}
Box::Box(double side)
	//:m_length{ side }, m_width{ side }, m_height{ side }
	:Box(side, side, side)
{
	std::cout << "Box constructor 2 called" << std::endl;
}
Box::Box(const Box& b)
	:m_length{ b.m_length }, m_width{ b.m_width }, m_height{ b.m_height }
{
	std::cout << "Box copy-constructor called" << std::endl;
	s_object_count++;
}
Box::~Box()
{
	s_object_count--;
	std::cout << "Box destructor called" << std::endl;

}
double Box::volume() const{
	return m_length * m_width * m_height;
}

void Box::set_length(double length)
{
	if (length > 0) {
		m_length = length;
	}
}

void Box::set_width(double width)
{
	if (width > 0) {
		m_width = width;
	}
}

void Box::set_height(double height)
{
	if (height > 0) {
		m_height = height;
	}
}

//Eksample for Box pointer
/*
Box* Box::set_length(double length)
{
	if (length > 0) {
		m_length = length;
	}
	return this; //Returns a pointer to this specific Box as Box pointer.
}
*/