#pragma once
#include "Carnivore.h"

class Dino :public Carnivore
{
private:
	int power;
	bool live;
public:
	Dino();
	void Eat(Herbivore* herbivore) override;
	int GetPower() override;
	bool IsAlive() override;
};

