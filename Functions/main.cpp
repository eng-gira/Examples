#include<iostream>
#include<vector>


using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


void eat();
void staticLocalExample();
bool drankWater(int cups = 1);

//Functions overloading: using the same name for various versions of the function. 
//Params must differ. Be careful while using default argument.
int addNums(int, int);
double addNums(double, double);

void changeNum(int &num);
void printVector(const vector<int> &v);


int main() {

    eat();

    cout << addNums(1, 2) << endl;
    cout << addNums(5.2, 2.3) << endl;

    int aNumber = 2;
    cout << "aNumber before changeNum call: " << aNumber << endl;

    changeNum(aNumber);
    cout << "aNumber after changeNum call: " << aNumber << endl;


    vector<int> aVector {1, 2, 3, 4, 5};
    printVector(aVector);


    staticLocalExample();
    staticLocalExample();

    return 0;
}

void eat()
{
    cout << "Eating..." << endl;
    cout << drankWater(1) << endl;
}

bool drankWater(int cups)
{
    return cups == 1;
}

int addNums(int a, int b){
    return a + b;
}

double addNums(double c, double d)
{
    return c + d;
}

void changeNum(int &num)
{
    num = 5050;
}

void printVector(const vector<int> &v)
{
    for(auto i : v)
        cout << i << endl;
}

void staticLocalExample()
{
    static int staticVar{5};

    cout << staticVar << " is staticVar." << endl;

    staticVar ++;

    cout << staticVar << " is staticVar." << endl;

}