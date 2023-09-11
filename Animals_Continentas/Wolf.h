#pragma once
#include "Carnivore.h"

class Wolf:public Carnivore
{
private:
	int power;
	bool live;
public:
	Wolf();
	void Eat(Herbivore* herbivore) override;
	int GetPower() override;
	bool IsAlive() override;
};

