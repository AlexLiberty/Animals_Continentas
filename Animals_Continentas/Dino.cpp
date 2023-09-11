#include "Dino.h"

Dino::Dino():power(500),live(true){}

void Dino::Eat(Herbivore* herbivore)
{
}

int Dino::GetPower()
{
	return power;
}

bool Dino::IsAlive()
{
	return live;
}
