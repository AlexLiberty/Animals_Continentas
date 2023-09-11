#include "Wildebeest.h"

Wildebeest::Wildebeest() : weight(100), live(true) {}

void Wildebeest::EatGrass()
{
	weight += 10;
}

bool Wildebeest::IsAlive()
{
	return live;
}

int Wildebeest::GetWeight()
{
	return weight;
}
