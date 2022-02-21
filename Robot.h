#ifndef ROBOT_H 
#define ROBOT_H
#include "Point.h"
#include <iostream>
using namespace std; 
/*
* Robot.cpp 
* 
* By: Aaron Carbonell
* 
* This is the h file for a Robot class. 
* A Robot class represents a Robot that is 
* positioned on a Cartesian plane. The Robot 
* is able to move throughout the plane and its 
* goal is to locate the treasure hidden elsewhere
* in the plane. 
*/

class Robot
{
public:
	Robot(); //default no argument constructor 
	Robot(int maxDist); //argument that takes in maxDistance
	~Robot(); //destructor that destroys robots


	void Move(int xr, int yr, string path); //Move function for Robot
	void LocateTreasure(int xr, int yr, int yt, int xt); 


	bool IsValidPath(string path); 
	
	




private:
	int num_shortest_paths_; //keeps track of the shortest paths
	int N, E, S, W; //keeps track of how how many how many moves made for each direction.
	int max_distance_; 

	Point robot_position_; //robot Point on plane
	Point treasure_location_; //robot Point on plane

};
#endif

