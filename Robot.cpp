#include "Robot.h"
/*
* Robot.cpp
* 
* By: Aaron Carbonell
* 
* This is the class that implements all of 
* the functions of Robot.h
*/
using namespace std; 

//Default no argument constructor
Robot::Robot()
{
	this->num_shortest_paths_ = 0; 

	N = 0; 
	E = 0; 
	S = 0; 
	W = 0; 

	this->max_distance_ = 0;

	this->robot_position_ = Point(); 
	this->treasure_location_ = Point(); 
}

//Constructor that takes in the maximum distance 
//that the robot can move one direction as argument. 
Robot::Robot(int maxDist)
{
	this->max_distance_ = maxDist; 

	this->num_shortest_paths_ = 0;


	this->N = 0;
	this->E = 0;
	this->S = 0;
	this->W = 0;

	this->robot_position_ = Point();
	this->treasure_location_ = Point();
}

//Destructor for robot
Robot::~Robot()
{
	robot_position_.setPoint(0, 0);
	treasure_location_.setPoint(0, 0);

	num_shortest_paths_ = 0;
	
	N = 0; 
	E = 0; 
	S = 0;
	W = 0;
}


/*
* Move() 
* 
* This recursive function moves the robot and adds on to the path string 
* based on the direction that the robot moves for each move. 
* 
*/
void Robot::Move(int xr, int yr, string path)
{
	
	//Base case: Robot is at the treasure 
	if (xr == treasure_location_.getX() && yr == treasure_location_.getY())
	{
		if (!IsValidPath(path))
		{
			return; 
		}
		else
		{
			cout << path << endl;
		}
	
		//reset the directions after printing path
		N = 0;
		S = 0;
		E = 0;
		W = 0;
		num_shortest_paths_++;
		return;

	}

	//Checks if can move North
	if ((yr < treasure_location_.getY())) 
	{
		N++; 
		E = 0;
		S = 0; 
		W = 0;
		Move(xr, yr + 1, path + "N"); 

	}

	//Checks if can move South
	if ((yr > treasure_location_.getY()))
	{
		S++; 
		N = 0; 
		E = 0;
		W = 0; 
		Move(xr, yr - 1, path + "S");
	}

	//Checks if can move East
	if( (xr < treasure_location_.getX()))
	{
		E++;
		N = 0; 
		S = 0;
		W = 0; 
		Move(xr + 1, yr, path + "E");
	}

	//Checks if can move West
	if (xr > treasure_location_.getX())
	{
		W++; 
		E = 0;
		N = 0; 
		S = 0; 
		Move(xr - 1, yr, path + "W"); 
		
	}
}

/*
* LocateTreasure() 
* 
* This function is used to find the treasure by calling the 
* recursive Move() function to move the Robot towards the 
* treasure. Used in Move() function. 
*/void Robot::LocateTreasure(int xr, int yr, int xt, int yt)

{
	string robotPath = ""; 

	//set the locations of Robot and Treasure
	robot_position_.setPoint(xr, yr);
	treasure_location_.setPoint(xt, yt); 

	if ((abs(xr - xt) + abs(yr - yt)) == 0) //calculates shortest possible dist between robot and treasure.
	{
		num_shortest_paths_ = 0; 
	}
	else
	{
		Move(xr, yr, robotPath);
	}
	cout << "Number of Paths: " << num_shortest_paths_ << endl; 
}

/*
* isValidPath()
* 
* This function checks if the path found after from the recursive
* Move function is valid. 
*/
bool Robot::IsValidPath(string path)
{
	int counter = 0; //used to increment to maxDistance + 1
	
	//direction strings to be prcoessed in the find() string library
	//function 
	string north;
	string east; 
	string south; 
	string west; 

	//loop until strings contain each direction maxDistance + 1
	//times 
	while (counter != max_distance_ + 1)
	{
		north += "N";
		east += "E"; 
		south += "S";
		west += "W";
		counter++;
	}

	//uses the find() string function to check if the 
	//path contains a string with a direction
	//an amount of times that exceeds maxDistance()
	bool check_north = (path.find(north) != std::string::npos);
	bool check_east = (path.find(east) != std::string::npos);
	bool check_south = (path.find(south) != std::string::npos);
	bool check_west = (path.find(west) != std::string::npos);
	
	//returns false if path goes a direction that exceeds maxDistance
	//otherwise returns true
	if (check_north || check_east || check_south || check_west)
	{
		return false;
	}

	
	return true;
}
