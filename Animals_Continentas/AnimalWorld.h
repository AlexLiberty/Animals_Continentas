#pragma once
#include "Continent.h"
#include <iostream>

using namespace std;

class AnimalWorld
{
private:
	Continent* continent;
public:
	AnimalWorld(Continent* continent);
	void RunFoodChain();
};

