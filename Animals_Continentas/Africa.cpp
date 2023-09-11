#include "Africa.h"

Herbivore* Africa::CreateHerbivore()
{
    return new Wildebeest();
}

//Carnivore* Africa::CreateCarnivore()
//{
//    return new Lion();
//}

Carnivore* Africa::CreateCarnivore()
{
    return new Dino();
}