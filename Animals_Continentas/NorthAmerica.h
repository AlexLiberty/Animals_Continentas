#pragma once
#include "Continent.h"
#include "Wolf.h"
#include "Bison.h"

class NorthAmerica : public Continent
{
public:
	Herbivore* CreateHerbivore() override;
	Carnivore* CreateCarnivore() override;
};

