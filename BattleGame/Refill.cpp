#include "Refill.h"

Refill::Refill(const int numberBullets)
{
	setNumberCurrentBullets(numberBullets);
	setNumberStartBullets(numberBullets);
}

Refill* Refill::clone() const
{
	return new Refill(*this);
}

void Refill::setNumberCurrentBullets(const int numberBullets)
{
	this->numberCurrentBullets = numberBullets;
}

int Refill::getNumberCurrentBullets() const
{
	return this->numberCurrentBullets;
}

void Refill::setNumberStartBullets(const int newStartBullets)
{
	this->numberStartBullets = newStartBullets;
}
int Refill::getNumberStartBullets() const
{
	return this->numberStartBullets;
}

bool Refill::hasBullets() const
{
	if (getNumberCurrentBullets() > 0)
	{
		return true;
	}
	return false;
}

void Refill::print() const
{
	std::cout << "Bullets: " << getNumberCurrentBullets() << "/" << getNumberStartBullets() << std::endl;
}