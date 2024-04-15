#include "Header.h"

int Money::Summ()
{
	return denomination * quantity;
}

Money::Money(int denomination, int quantity)
{
	this->denomination = denomination;
	this->quantity = quantity;
}