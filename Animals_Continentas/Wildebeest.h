#pragma once
#include "Herbivore.h"

class Wildebeest:public Herbivore
{
private:
	int weight;
	bool live;
public:
	Wildebeest();
	void EatGrass() override;
	bool IsAlive() override;
	int GetWeight() override;
};

