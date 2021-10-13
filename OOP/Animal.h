// The specification of the Animal class is here


#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include<iostream>
#include<string>
using std::string;


class Animal
{
    private:
    string name;
    int feet;
    int speed;


    public:

    string getName();
    void setName(string name);

    int getSpeed();
    void setSpeed(int speed);

    void eat(string food);
    void move(int distance, int speed);
    
    
    
};

#endif
