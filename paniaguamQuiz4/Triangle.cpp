#include "Triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle()													//default constructor
{
	base = 1;															//initializes base and height
	height = 1;
}

Triangle::Triangle(double base, double height)							//overloaded constructor
{
	this->base = base;
	this->height = height;
}

void Triangle::setBase(double b)
{
	base = b;
}

void Triangle::setHeigth(double h)
{
	height = h;
}

double Triangle::getBase() const
{
	return base;
}

double Triangle::getHeight() const
{
	return height;
}

double Triangle::getArea() const
{
	return (base * height) / 2;
}

//overload operators
Triangle Triangle::operator ++()
{
	++base;																//overloaded operator increases base and height
	++height;
	return *this;
}

Triangle Triangle::operator ++(int)
{
	Triangle temp(base, height);
	base++;																//overloaded operator increases base and height
	height++;
	return temp;
}

Triangle Triangle::operator --()
{
	--base;																//overloaded operator decreases base and height
	--height;
	return *this;
}

Triangle Triangle::operator --(int)
{
	Triangle temp(base, height);										//overloaded operator decreases base and height
	base--;
	height--;
	return temp;
}

ostream &operator <<(ostream & someStream, const Triangle & someTriangle)
{
	someStream << "The base is " << someTriangle.getBase() << ", " << "the height is " << someTriangle.getHeight() << endl;
	someStream << "The area is " << someTriangle.getArea() << endl;
	return someStream;
}