#include "Point.h"
using namespace std; 
/*
* Point.cpp 
* 
* By: Aaron Carbonell 
* 
* This is the implementation of h file for 
* a Point class. 
*/

/*
* Default no argument constructor for Point
*/
Point::Point()
{
	this->x = 0; 
	this->y = 0;
}

/*
* Constructor that takes in arguments for the
* x and y coordinates
*/
Point::Point(int x1, int y1)
{
	this->x = x1; 
	this->y = y1; 
}

/*
* getX() 
* 
* This method access the x coordinate of a 
* Point class
*/
int Point::getX()
{
	return this->x;
}

/*
* setX()
* 
* This method sets the x coordinate of a Point
* class to the value taken in. 
*/
void Point::setX(int x1)
{
	this->x = x1; 
}

/*
* getY()
*
* This method access the y coordinate of a
* Point class
*/
int Point::getY()
{
	return this->y;
}

/*
* setY()
*
* This method sets the y coordinate of a Point
* class to the value taken in.
*/
void Point::setY(int y1)
{
	this->y = y1; 
}

/*
* setPoint()
*
* This method sets the x and y coordinates of a Point class
* to the values taken in. 
*/
void Point::setPoint(int x1, int y2)
{
	this->x = x1; 
	this->y = y2; 
}
