#pragma once

class Herbivore abstract
{
public:  
    virtual void EatGrass() = 0;
    virtual bool IsAlive() = 0;
    virtual int GetWeight() = 0;
};
