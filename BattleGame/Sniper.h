#pragma once
#include <iostream>
#include <string>
#include "Shooters.h"

class Sniper :public Shooters
{
public:
	Sniper();
	virtual Sniper* clone() const;
	virtual void print() const;
};
