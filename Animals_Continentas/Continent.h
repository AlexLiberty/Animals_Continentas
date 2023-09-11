#pragma once
#include "Herbivore.h"
#include "Carnivore.h"

class Continent abstract
{
public:
    virtual Herbivore* CreateHerbivore() = 0;
    virtual Carnivore* CreateCarnivore() = 0;
};

