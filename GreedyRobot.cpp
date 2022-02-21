
#include "Robot.h"
#include <iostream>
#include <cstdlib>

/*
* GreedyRobot.cpp
*
* By: Aaron Carbonell
* Fall 2021
*
* This is the driver to test the functions
* of the Robot class.
*/


//main() tests the Robot class by taking 
//in integers from the command line which 
//represent the x,y coordinates for both 
//the Robot and the treasure, as well as 
//the maxDistance that a Robot can move in 
//one direction. 
int main(int argc, char* argv[])
{	
	
	int xr = 0; 
	int yr = 0; 
	int xt = 0; 
	int yt = 0; 
	int maxDistance = 0; 
	
	xr = atoi(argv[1]);
	yr = atoi(argv[2]); 
	xt = atoi(argv[3]);
	yt = atoi(argv[4]);
	maxDistance = atoi(argv[5]); 

	Robot robo(maxDistance);


	robo.LocateTreasure(xr, yr, xt, yt);
	
	
	return 0;

}


