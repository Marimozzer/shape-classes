#include "Square.h"
#include <iostream>
using namespace std;

Square::Square() 
{
	length = 1;
}

Square::Square(double side)
{
	length = side;
}

void Square::setLength(double side)
{
	length = side;
}

double Square::getLength() const
{
	return length;
}

double Square::getArea() const
{
	return length * length;
}

double Square::getPerimeter() const
{
	return length * 4;
}

//overload operators
Square Square::operator ++()
{
	++length;
	return *this;
}

Square Square::operator ++(int)
{
	Square temp(length);
	length++;
	return temp;
}

Square Square::operator --()
{
	--length;
	return *this;
}

Square Square::operator --(int)
{
	Square temp(length);
	length--;
	return temp;
}

ostream &operator <<(ostream & someStream, const Square & someSquare)
{
	someStream << "The length of a side is " << someSquare.getLength() << endl;
	someStream << "The area is " << someSquare.getArea() << endl;
	someStream << "The perimeter is " << someSquare.getPerimeter() << endl;
	return someStream;
}