#include <iostream>
#include <cmath>
using namespace std;
int main () {
    //Max and min   
    //The max(x,y) function can be used to find the highest value of x and y:

    cout << min(1,100) << " is min value and min indicates smaller value" << endl;
    cout << max(1,100) << " is max value and max indicates greater value" << endl;

    int x,y;
    cout << "enter first number : " ;
    cin >> x ;

    cout << "enter second number : " ;
    cin >> y ;

    cout << min(x,y) <<  " is smaller than " << max(x,y) << endl << "        or " << endl << max(x,y) <<  " is greater than " << min(x,y) <<endl;

    //cmath lib
    //sqrt(x) for square root of x 
    int sq ;
    cout << "enter a number to get it square root : ";
    cin >> sq ;
    cout << sqrt(sq) << endl;

    //round(fl) fl is float or decimal value
    float fl;
    cout << "enter a decimal value to get it roundup value : "; //roundup or nearest value
    cin >> fl ;
    cout << round(fl) << endl;

    //log(ln) , used to get logorithm value
    float ln;
    cout << "enter a number to get it\'s logorithm value : "; 
    cin >> ln ;
    cout << log(ln) << endl;



}