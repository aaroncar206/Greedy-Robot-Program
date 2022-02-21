#ifndef POINT_H 
#define POINT_H
using namespace std; 
/*
* Point.h
* 
* Author: Aaron Carbonell 
* 
* This is the h file for a Point class, which 
* represents a (x,y) coordinate point on a Cartesian
* plane. 
*/

class Point
{
public: 
	Point(); 
	Point(int x1, int y1);

	int getX(); 
	void setX(int x1); 

	int getY();
	void setY(int y1);

	void setPoint(int x1, int y2); 
	
private:
	int x, y; 
};
#endif

