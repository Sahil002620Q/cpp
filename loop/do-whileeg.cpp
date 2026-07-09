#include <iostream>
using namespace std;
int main (){ 
    int x;
    do{
        cout << "enter a positive number :";
        cin >> x ;
    }while(x>0);
    cout << "you entered negative number";
}