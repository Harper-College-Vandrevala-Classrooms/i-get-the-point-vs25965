#pragma once
class Point
{

public:
	Point(double xcoordinate, double ycoordinate)
	{
		xCoordinate = xcoordinate;
		yCoordinate = ycoordinate;
	}
	bool operator == (const Point& obj);
	bool operator !=(const Point& obj);
	double operations(const Point& obj); //overrides - operation
	double distance(const Point& obj);
	Point midpoint(const Point& obj);   //overrides + and / operations 
	
private:
	double xCoordinate;
	double yCoordinate;
};
