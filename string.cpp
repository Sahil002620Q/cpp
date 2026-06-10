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
    string text = "\nHello Mrs. Sahil, How is is you cpp going";  //\n is together and takes 1 bit pf storage
    cout << text.length() << endl ;
    cout << text.size() << endl ;

    string str = "docker ps -a list all containers";
    cout << str[1] << str[14] <<  str[15] << str[1] << endl ;  //+ can't be use in place of <<
    cout << str[str.length()-1] << endl ;  //negative indexing just like str[-1] in python

    //string modification
    string stg = "docker images";
    stg[0] = 'D';
    cout << stg << endl;

    //at(x) function works simmilar to string[x]
    string gh = "Git Hub";
    cout << "Original string : " << gh << endl ;

    cout << "First character : " << gh.at(0) << endl ;    
    cout << "Second character : " << gh.at(1) << endl ;
    cout << "Third character : " << gh.at(2) << endl << endl;
    cout << "Last character : " << gh.at(gh.length()-1) << endl;

    gh.at(0) = 'D';
    gh.at(1) = 'e';
    gh.at(2) = 'v';


    cout << "Modified string : " << gh << endl;

    //special character \', \" ,\\ , \n , \t 
    string dh = "Dev hub is owned by \"sahil\" and ";
    cout << dh << endl;


}