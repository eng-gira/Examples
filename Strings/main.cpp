#include<iostream>
#include<string>

using std::cout; // best practice
using std::cin;
using std::endl;
using std::string;


int main() {
    string s1;
    string s2 {"ABCDE"};
    string s3 (4, 'X'); // XXXX
    string s4 {s2, 2}; // CDE
    string s5 {s2, 0, 2}; // AB

    cout << s3 << '\n' << s4 << '\n' << s5 << endl;

    for(char c : s2)
        cout << c << endl;
    
    cout << "s2.at(2) = " << s2.at(2) << endl;

    string part1 = "first part ";
    string part2{"second part"};
    string part3 = "third part";

    string oneAndTwo = part1 + part2;
    string oneAndThree = part1 + part3;
    string plusEquals = "Fru";
    plusEquals += "its";

    //string illegalString = "Concatenating literals is " + "illegal";

    cout << oneAndTwo << '\n' << oneAndThree << endl;
    cout << plusEquals << endl;

    cout << "The string part1 is: " << part1 << endl;
    cout << "Length of the string part1 is: " << part1.length() << endl;
    cout << "First 5 chars of the string part1 are: " << part1.substr(0, 5) << endl;
    cout << part1.at(6) << " is at the " << part1.find('p') << "th index in the string part1." << endl;
    cout << part1.erase(6, 1) << " is the string part1 without the p." << endl;


    string ip;
    getline(cin, ip);

    cout << "Your input was: " << ip << endl;

    return 0;
}