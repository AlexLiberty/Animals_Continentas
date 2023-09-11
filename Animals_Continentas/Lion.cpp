#include "Lion.h"

Lion::Lion() :power(100), live(true) {}

void Lion::Eat(Herbivore* herbivore)
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

int Lion::GetPower()
{
	return power;
}

bool Lion::IsAlive()
{
	return live;
}
