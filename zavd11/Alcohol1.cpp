#include "Alcohol1.h"

Alcohol1::Alcohol1() 
{

}


Alcohol1::Alcohol1(int strength, int alcohol)
{
	this->strength = strength;
	this->alcohol = alcohol;
}

void Alcohol1::setAlcohol1(int strength)
{
	this->strength = strength;
}

ostream& operator<<(ostream& o, const Alcohol1& alc)
{
	o << "Strength of the Alcohol: " << alc.strength << endl;
	return o;
}