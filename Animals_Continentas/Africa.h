#pragma once
#include "Continent.h"
#include "Lion.h"
#include "Wildebeest.h"
#include "Dino.h"

class Africa : public Continent
{
public:
	Herbivore* CreateHerbivore() override;
	Carnivore* CreateCarnivore() override;
};

