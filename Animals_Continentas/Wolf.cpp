#include "Wolf.h"

Wolf::Wolf() :power(50), live(true) {}

void Wolf::Eat(Herbivore* herbivore)
{
	if (power > herbivore->GetWeight())
	{
		power += 10;
	}
	else
	{
		power - +10;
	}
	herbivore->IsAlive() ? power += 10 : live = false;
}

int Wolf::GetPower()
{
	return power;
}

bool Wolf::IsAlive()
{
	return live;
}
