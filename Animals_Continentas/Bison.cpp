#include "Bison.h"

Bison::Bison() : weight(200), live(true) {}

void Bison::EatGrass()
{
	weight += 10;
}

bool Bison::IsAlive()
{
	return live;
}

int Bison::GetWeight()
{
	return weight;
}
