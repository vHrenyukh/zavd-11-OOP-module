#include "Liquid.h"

Liquid::Liquid()
{
}

Liquid::Liquid(int destiny, int name)
{

	this->density = destiny;
	this->name = name;
}



void Liquid::setDestiny(int density1)
{
	this->density = density1;
}



ostream& operator<<(ostream& o, const Liquid&lqd)
{
		o << "Destiny of the liquid: " << lqd.density << endl;
		o << "Name of the liquid: " << lqd.name << endl;
	return o;
}
