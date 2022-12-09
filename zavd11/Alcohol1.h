#pragma once
#include "Liquid.h"

using namespace std;
class Alcohol1 : public Liquid
{
	int strength = 0;
	int alcohol = 0;
	
public:
	Alcohol1();
	Alcohol1(int strength, int alcohol);

	void setAlcohol1(int strength);

	Alcohol1& operator--() {
		--(this->strength);
		return *this;
	}
friend ostream& operator<<(ostream& o, const Alcohol1& alc);
};
