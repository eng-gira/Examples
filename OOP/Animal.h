// The specification of the Animal class is here


#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include<iostream>

class Animal
{
    friend void abc(Animal &a); //has access to everything (even private members) in this class.
    //friend void OtherClass::abcdef(Animal &animal); //declare a method of another class as a friend.
    //friend class OtherClass; //declare a class as a friend.

    private:
    std::string name;
    int feet;
    int speed;
    static int numAnimals;


    public:
    //Constructor with default parameter values
    Animal(std::string n = "Unnamed Animal", int s = 5, int f = 4) : name{n}, speed{s}, feet{f} {
        numAnimals++;
        std::cout << "Constructor with default params called. numAnimals = " << numAnimals << std::endl;
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
        numAnimals++;
        std::cout << "Copy Constructor called: a copy was made of " << animal.name << 
            ". numAnimals = " << numAnimals << std::endl;
    }

    std::string getName();
    void setName(std::string name);

    int getSpeed();
    void setSpeed(int speed);

    int getFeet();
    void setFeet(int feet);

    void eat(std::string food);
    void move(int distance, int speed);
    
    static int getNumAnimals();

    ~Animal()
    {
        numAnimals--; 
        std::cout << "Destructor was called for animal " << getName() << ". numAnimals = " << numAnimals << std::endl;
    }
    
};

#endif
