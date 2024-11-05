#include "Point.h"
#include <cmath>
#include<iostream>

using namespace std;
bool Point::operator == (const Point& obj)
{
	if (this->xCoordinate == obj.xCoordinate && this->yCoordinate == obj.yCoordinate)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Point::operator !=(const Point& obj) 
{
	if (this->xCoordinate != obj.xCoordinate || this->yCoordinate != obj.yCoordinate)
	{
		return true;
	}
	else
	{
		return false;
	}
}
double Point::operations(const Point& obj)
{
	double a = this->xCoordinate - obj.xCoordinate;
	double b = this->yCoordinate - obj.yCoordinate;

	return  (a * a)+(b * b);
}
double Point::distance(const Point& obj)
{
	return sqrt(operations(obj));
}
Point Point::midpoint(const Point& obj)
{
	double a = (this->xCoordinate + obj.xCoordinate)/2;
	double b = (this->yCoordinate + obj.yCoordinate)/2;

	cout << "\nMidpoint between two points: (" <<a<< ", " <<b<<")" << endl;
	
	return Point(a, b);
}