// The implementation of the Animal class is here


#include "Animal.h"


std::string Animal::getName()
{
    return name;
}

void Animal::setName(std::string n)
{
    name = n;
}

int Animal::getSpeed()
{
    return speed;
}

void Animal::setSpeed(int s)
{
    speed = s;
}

int Animal::getFeet()
{
    return feet;
}

void Animal::setFeet(int f)
{
    feet = f;
}

void Animal::eat(std::string food)
{
    std::cout << "Animal (" << Animal::getName() << ") is eating." << std::endl;
}

void Animal::move(int distance, int speed)
{
    std::cout << "Animal " << Animal::getName() << " moved " << distance << " distance units at a speed of " << speed << " speed units." << std::endl;
}