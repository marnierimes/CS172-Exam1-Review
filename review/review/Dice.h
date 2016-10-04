#pragma once

#include<iostream>

class Dice
{
public:
	Dice(int sides)
	{
		sides = 6;
	};
	int Roll();
	int GetRoll();
	int GetSides(int newSides);
private:
	int sides;
	int numberOfRolls;
};