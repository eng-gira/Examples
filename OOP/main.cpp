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

    return 0;
}