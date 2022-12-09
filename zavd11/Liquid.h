#pragma once
#include <ostream>
#include <iostream>

using namespace std;
class Liquid 
{

	int density = 0;
	string name = " ";


public:
	Liquid();
	Liquid(int destiny, int name);


	void setDestiny(int density1);

	Liquid& operator--() {
		--(this->density);
		return *this;
	}

	friend ostream& operator<<(ostream& o, const Liquid& lqd);

};

