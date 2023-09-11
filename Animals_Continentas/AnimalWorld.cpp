#include "AnimalWorld.h"

AnimalWorld::AnimalWorld(Continent* continent) : continent(continent) {}

void AnimalWorld::RunFoodChain()
{
    Herbivore* herbivore = continent->CreateHerbivore();
    Carnivore* carnivore = continent->CreateCarnivore();

    if (herbivore->IsAlive() && carnivore->IsAlive()) 
    {
        carnivore->Eat(herbivore);
        cout << "Carnivore's power: " << carnivore->GetPower() << endl;
    }
    else 
    {
        cout << "One of the animals is dead. The food chain cannot continue." << endl;
    }
}
