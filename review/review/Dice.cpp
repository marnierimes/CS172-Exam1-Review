#include "Dice.h"
#include <iostream>
#include <cstdlib>

Dice::Dice(int sides)
{
	//Check that the number of sides is valid
	if (sides <= 0)
	{
		sides = 6;
	}

	numSides = sides;
	numRolls = 0;
}

int Dice::Roll()
{
	//Increment the number of times this dice was rolled.
	numRolls++;

	//The random number generate is seeded in main
	return (rand() % numSides) + 1;
}
int Dice::GetRolls()
{
	return numRolls;
}

int Dice::GetSides()
{
	return numSides;
}