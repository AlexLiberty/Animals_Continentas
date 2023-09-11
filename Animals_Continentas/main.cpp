#include "Continent.h"
#include "AnimalWorld.h"
#include "Africa.h"
#include "NorthAmerica.h"

int main()
{
    Continent* africa = new Africa();
    AnimalWorld world(africa);

    world.RunFoodChain();

    delete africa;

    return 0;
}