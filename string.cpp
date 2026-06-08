#include <iostream>
#include <string>
using namespace std;
int main () {
    //String

    // string greet = "hello ";
    // string name ;
    // cout << "Enter your name : "; cin >> name ;
    // string message = "!, How are you.";
    // cout << greet + name + message << endl ;

    //String Concatenation
    // The + operator can be used between strings to add them together to make a new string. This is called concatenation:

    string firstName = "Sahil ";
    string lastName = "Max";
    string fullName = firstName + lastName;
    cout << fullName << endl;

    string FirstName = "Sam";
    string LastName = "Max";
    string FullName = FirstName + " " + LastName;
    cout << FullName << endl;

    //Concatination by using append
    string fName = "Sahil ";
    string lName = "Max";
    string Name = fName.append(lName);
    string nName = Name.append(" k.s");

    cout << nName << endl;

    //int x and string y can not be added due different data type

    //String length and size ie both are same
    string text = "Hello Mrs. Sahil, How is is you cpp going";
    cout << text.length();
    cout << text.size();



}