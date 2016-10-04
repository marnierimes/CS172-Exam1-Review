#pragma once

#include<iostream>

class Dice
{
public:
	Dice(int sides);
	int Roll();
	int GetRoll();
	int GetSides();
};