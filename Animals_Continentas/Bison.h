#pragma once
#include "Herbivore.h"

class Bison :public Herbivore
{
private:
	int weight;
	bool live;
public:
	Bison();
	void EatGrass() override;
	bool IsAlive() override;
	int GetWeight() override;
};

