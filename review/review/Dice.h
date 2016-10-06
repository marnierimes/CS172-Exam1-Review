

#ifndef Dice_hpp
#define Dice_hpp

#include <stdio.h>

//this represents a dice of n sides
class Dice
{
private:
	int numSides;
	int numRolls;

public:

	//creates a dice with the given number of sides.
	//if the sides is less than or equal to 0 then
	//this creates a 6 sided dice. 
	Dice(int sides);

	//Rolls the dice and returns a random number
	//between 1 and the number of sides on the dice.
	int Roll();

	//Returns the number of times this dice was rolled.
	int GetRolls();

	//Return the number of sides on this dice.
	int GetSides();
};

#endif /* Dice_hpp */
