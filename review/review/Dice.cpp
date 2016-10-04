#include<iostream>
#include<ctime>
#include<cstdlib>
#include"Dice.h"

Dice(sides);


int Dice::Roll()
{
	int num;
	srand(time(NULL));
	num = rand() % 6;
	return num;
}

int Dice::GetRoll(int newRoll)
{
	
}

int Dice::GetSides(int newSides)
{
	int sides = newSides;
}

