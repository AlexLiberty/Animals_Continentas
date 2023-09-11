#pragma once
#include "Carnivore.h"

class Lion: public Carnivore
{
private:
	int power;
	bool live;
public:
	Lion();
	void Eat(Herbivore* herbivore) override;
	int GetPower() override;
	bool IsAlive() override;
};

