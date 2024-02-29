#pragma once
#include <iostream>

class Box {
public:
	friend double surfaceArea(const Box& b);
	//Box() {} //Samme som under
	//Box() = default;
	explicit Box(double length, double width, double height);
	explicit Box(double side);
	Box(const Box& b);
	//Box(const Box& b) = delete; //This is to not let the program make a default copy-constructor.
	//Destructor
	~Box();

	double volume() const;
	double get_length() const{ return m_length; }
	double get_width() const { return m_width; }
	double get_height() const { return m_height; }
	size_t get_object_count() const { return s_object_count; }
	//Box* set_length(double length);
	//Box* set_width(double width);
	//Box* set_height(double height);
	void set_length(double length);
	void set_width(double width);
	void set_height(double height);
private:
	double m_length;
	double m_width;
	double m_height;
	static inline size_t s_object_count{ 0 };
};

