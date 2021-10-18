// The specification of the Animal class is here


#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include<iostream>

class Animal
{
    private:
    std::string name;
    int feet;
    int speed;


    public:
    //Constructor with default parameter values
    Animal(std::string n = "Unnamed Animal", int s = 5, int f = 4) : name{n}, speed{s}, feet{f} {
        std::cout << "Constructor with default params called." << std::endl;
    }
    
    // Animal(int feet){
    //     std::cout << "Constructor with feet arg called." << std::endl;
    // }


    // //Constructors with initialization list.
    // Animal(std::string n, int s) : name{n}, speed{s} {
    //     std::cout << "Constructor with name and speed args called." << std::endl;
    // }
    // Animal(std::string n, int s, int f) : name{n}, speed{s}, feet{f} {
    //     std::cout << "Constructor with name, speed and feet args called." << std::endl;
    // }

    // //Delegating Constructor: delegates object initialization to another constructor (only works with initialization lists).
    // Animal(std::string n) : Animal{n, 5, 4} {
    //     std::cout << "Delegating Constructor Called." << std::endl;
    // }


    //Copy Constructor
    Animal (const Animal &animal)
    : name {animal.name}, 
      speed {animal.speed}, 
      feet {animal.feet}
    {
        std::cout << "Copy Constructor called: a copy was made of " << animal.name << std::endl;
    }

    std::string getName();
    void setName(std::string name);

    int getSpeed();
    void setSpeed(int speed);

    int getFeet();
    void setFeet(int feet);

    void eat(std::string food);
    void move(int distance, int speed);
    
    ~Animal()
    {
        std::cout << "Destructor was called for animal " << getName() << "." << std::endl;
    }
    
};

#endif
