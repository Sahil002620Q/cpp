#include <iostream>
using namespace std;
int main () {
    int x;
    cout << "enter a number : " ; 
    cin >> x ;
    string nature =  (x == 0) ? "Neither positive nor negative":(x > 0) ? "Positive" : "negative";
    cout << nature << endl ;
}