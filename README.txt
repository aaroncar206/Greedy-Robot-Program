README
------
Author: Aaron Carbonell 

Program description: Program  used recursion to determines all unique shortest possible 
paths from the robot to the treasure with the following condition: the robot may never 
move in the same direction more than MaxDistance times in a row.

Input: the starting (x,y) position of the robot. 

Output: the list of all unique shortest possible paths to the treasure.

- Robot: Defines the robot object which is placed on a 2D coordinate grid (x,y) and
navigates throughout the grid to find the treasure. Robot can only move one position 
in each direction (N,E,S,W).

- Point: Defines the current position which the Robot is at in the grid. 

- GreedyRobot: The driver class to test the functionality of the Robot.