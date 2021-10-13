#include<iostream>
#include<string>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;


int main()
{
    int *ptr1 {nullptr}; //Always initialize your pointers.
    int x = 5;

    ptr1 = &x;

    cout << "ptr1 = " << ptr1 << ", *ptr1 = " << *ptr1 << ", &x = " << &x << ", x = " << x << endl;

    *ptr1 = 10;
    x++;
    cout << "ptr1 = " << ptr1 << ", *ptr1 = " << *ptr1 << ", &x = " << &x << ", x = " << x << endl;


    vector<string> students {"Student1", "Student2", "Student3"};    
    vector<string> *vPtr {nullptr};

    vPtr = &students;
    
    cout << (*vPtr).at(0) << ", " << (*vPtr).at(1) << endl;

    for(auto student : *vPtr)
        cout << student << endl;

    // cout << "..... Dynamic Memory Alloc (in the heap)....." << endl;

    // //int *intPtr {nullptr};
    // //intPtr = new int; 
    // //delete intPtr; 

    // int *arrayPtr {nullptr};
    // int size {};

    // cout << "Enter array size (< 10): " << endl;
    // cin >> size;

    // if(size < 10) 
    //     arrayPtr = new int[size];

    // for(int i = 0; i < size; i ++)
    // {
    //     arrayPtr[i] = i+1;
    //     cout << arrayPtr[i] << endl;
    // }

    // cout << arrayPtr[size-2] << endl;

    // //deallocate
    // delete [] arrayPtr;

    cout << "---------" << endl;

    int scores[] {53, 61, 77,  49, 88};
    int *scoresPtr {scores};

    cout << "scoresPtr: " << scoresPtr << endl;
    cout << "*scoresPtr: " << *scoresPtr << endl;
    cout << "scoresPtr[0]: " << scoresPtr[0] << endl;
    cout << "scoresPtr[1]: " << scoresPtr[1] << endl;
    cout << "scoresPtr + 1: " << scoresPtr + 1 << endl;
    cout << "scoresPtr + 2: " << scoresPtr + 2 << endl;
    cout << "scoresPtr + 3: " << scoresPtr + 3 << endl;
    cout << "*(scoresPtr + 3): " << *(scoresPtr + 3) << endl;
    cout << "*(scores + 1): " << *(scores + 1) << endl;

    int *tempPtr = scoresPtr;
    cout << "tempPtr: " << tempPtr << endl;
    tempPtr++; //since pointing to array of ints, in my machine, address += 4
    cout << "tempPtr after ++: " << tempPtr << endl;
    tempPtr+=2; //since pointing to array of ints, in my machine, address += 2x 4
    cout << "tempPtr after +=2: " << tempPtr << endl;


    cout << "============" << endl;


    return 0;
}