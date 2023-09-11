#pragma once
#include "Herbivore.h"

class Carnivore abstract
{
protected:
    int power;
    bool live;
public:
    virtual void Eat(Herbivore* herbivore) = 0;
    virtual int GetPower() = 0;
    virtual bool IsAlive() = 0;
};

