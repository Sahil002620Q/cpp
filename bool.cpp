#include <iostream>
#include <cmath>
using namespace std;
int main () {
    //bool data type
    //true(1) and false(0)

    // bool AreYouAdult = true;   //0 and 1 can be used to replace true and false 
    // bool YouHateCats = false;

    // cout << boolalpha;  // it will convert 1 into true and 0 into false in terminal
    // cout << "Are you adult : " << AreYouAdult << endl ;  

    // cout << noboolalpha; // it will stop boolalpha and both can be used to gether with sode between them if you want to get true or false value in specific line
    // cout << "Do you hate cats : " << YouHateCats << endl ;  

    // //boolean expression
    // cout << boolalpha <<"Is 10 greater than one :" << (10>1) << noboolalpha << endl;

    // cout << boolalpha <<"Is 10 equal to 10.001 :" << (10 == 10.001) << noboolalpha << endl;
    // cout << boolalpha <<"Is 10 equal to round up of 10.001 :" << (10 == round(10.001)) << noboolalpha << endl;

    //Store the Result in a Boolean Variable
    int nx = 10 ;
    int nv = 20 ;
    bool big = nv > nx ;
    cout << big << endl;

    //real life eg:
    int myAge = 19 ;
    int adult = 18 ;
    cout << boolalpha << (myAge >= adult) << endl ;

    //if else with boolean
    int age ;
    int voter = 18 ;
    
    cout << "enter your age :";
    cin >> age ;  
    int rem = voter - age; //declare after getting age 

    if (age >= 18){  
    cout << "You can vote";
    }else {
    cout << "You can't vote your minimum age must be 18 "<< endl << "You can vote after " << rem <<" year";
    }  
         

}