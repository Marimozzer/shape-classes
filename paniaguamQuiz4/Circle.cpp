#include "Circle.h"
#include <iostream>
#include <iomanip>
using namespace std;

const double pi = 3.1415926535897;

Circle::Circle()
{
	radius = 1;
}

Circle::Circle(double r)
{
	radius = r;
}

void Circle::setRadius(double r)
{
	radius = r;
}

double Circle::getRadius() const
{
	return radius;
}

double Circle::getArea() const
{	
	return (radius * radius) * pi;
}

double Circle::getCirumference() const
{
	return 2 * radius * pi;
}

//overload operators
Circle Circle::operator ++()
{
	++radius;
	return *this;
}

Circle Circle::operator ++(int)
{
	Circle temp(radius);
	radius++;
	return temp;
}

Circle Circle::operator --()
{
	--radius;
	return *this;
}

Circle Circle::operator --(int)
{
	Circle temp(radius);
	radius--;
	return temp;
}

ostream &operator <<(ostream & someStream, const Circle & someCircle)
{
	someStream <<  "The radius is " << someCircle.getRadius() << endl;
	someStream << fixed << setprecision(1) << "The area is " << someCircle.getArea() << endl;
	someStream << "The circumference is " << someCircle.getCirumference() << endl;
	return someStream;
}