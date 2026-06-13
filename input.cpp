#include <iostream>
using namespace std;
int main () {
    //user input
    int x;
    cout << "enter a number ";
    cin >> x;
    cout << "you entered " << x;    //space is terminator hence sam max will output sam only in string and in int it will return single first no. before sapce

    string y ;
    cout << "ENTER YOUR NAME :";
    cin >> y ;
    cout << "YOUR NAME IS :" << y;

    // as above space act as terminator .That's why, when working with strings, we often use the getline() function to read a line of text. It takes cin as the first parameter, and the string variable as second:
    //getline() function

    string z;                           //works stand alone
    cout << "ENTER YOUR NAME : ";
    getline(cin,z);
    cout << "YOUR NAME IS : " << z ;
}






