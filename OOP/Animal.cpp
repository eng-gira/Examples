// The implementation of the Animal class is here


#include "Animal.h"

using std::cout;
using std::endl;

string Animal::getName()
{
    return name;
}

void Animal::setName(string n)
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

void Animal::eat(string food)
{
    cout << "Animal (" << Animal::getName() << ") is eating." << endl;
}

void Animal::move(int distance, int speed)
{
    cout << "Animal " << Animal::getName() << " moved " << distance << " distance units at a speed of " << speed << " speed units." << endl;
}