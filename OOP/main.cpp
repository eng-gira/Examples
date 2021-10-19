#include<iostream>
#include<string>
#include<vector>

#include "Animal.cpp" // The video says include only the h file but that doesn't work for me.

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;


class Player
{
    public:
    string name;
    int level {1};
    private:
    string secret {"same secret for all players!"};

    public:
    void talk(string words){
        cout << "talking and saying " << words << endl;
    }
    bool isBeginner()
    {
        return level < 5;
    }
    void levelUp()
    {
        level++;
    }

    int getLevel();
};

int Player::getLevel()
{
    return level;
}

void displayAnimal(Animal a)
{
    cout << "Name: " << a.getName() << endl;
    cout << "Speed: " << a.getSpeed() << endl;
    cout << "Feet: " << a.getFeet() << endl;
}


//You always want to use a copy constructor that does a deep copy when you have raw cpp pointers.
class DeepCopyExample 
{
    private:
        int *data;

    public:
        DeepCopyExample(int d);
        DeepCopyExample(const DeepCopyExample &source); // Copy Constructor

        int settDataValue(int v) {*data = v;}
        int getDataValue() {return *data;}

        ~DeepCopyExample();
};
DeepCopyExample::DeepCopyExample(int d)
{
    data = new int;
    *data = d;
}
DeepCopyExample::~DeepCopyExample()
{
    delete data;
    cout << "Destructor freed data." << endl;
}
DeepCopyExample::DeepCopyExample(const DeepCopyExample &source)
{
    //create new storage and copy value
    data = new int;
    *data = *source.data;
    cout << "Copy Constructor -- deep" << endl;
}
//Alternative
// DeepCopyExample::DeepCopyExample(const DeepCopyExample &source) : DeepCopyExample{*source.data}
// {
//     cout << "Copy Constructor -- deep" << endl;
// }

void displayDeepCopyExample(DeepCopyExample d)
{
    cout << d.getDataValue() << endl;
}

int main()
{

    Player player1;

    cout << "player1's level is " << player1.level << endl;
    player1.name = "Player One";
    cout << "player1's name is " << player1.name << endl;

    Player player2;

    Player *playerOnHeap {nullptr};
    playerOnHeap = new Player;
    (*playerOnHeap).name = "The player on the heap";
    playerOnHeap->level = 3;
    cout << "Name of playerOnHeap: " << (*playerOnHeap).name << ", level: " << (*playerOnHeap).level << endl;
    playerOnHeap->talk("Hi");
    cout << ((*playerOnHeap).isBeginner() ? "Beginner" : "Not Beginner") << endl;
    (*playerOnHeap).levelUp();
    cout << (*playerOnHeap).level << endl;
    (*playerOnHeap).levelUp();
    cout << ((*playerOnHeap).isBeginner() ? "Beginner" : "Not Beginner") << endl;
    cout << (*playerOnHeap).getLevel() << " is the player's level." << endl;
    delete playerOnHeap;

    Animal lion;
    lion.setName("Lion");
    lion.eat("meat");
    lion.move(10, 5);

    Animal giraffe {"grf"};
    cout << giraffe.getName() << endl;


    Animal someAnimal;
    cout << someAnimal.getName() << endl;

    Animal anotherAnimal {someAnimal}; // Copy Constructor

    displayAnimal(anotherAnimal);

    // Animal cheetah{4};
    // cheetah.setName("Cheetah");

    DeepCopyExample obj1 {30};
    displayDeepCopyExample(obj1);

    cout << "...." << endl;


    return 0;
}