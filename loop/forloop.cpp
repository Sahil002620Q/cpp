#include <iostream>
using namespace std;
int main () {
    int i;
    for(i = 0;i < 10;i++){
        cout << i << endl ;
    }

    cout << "even" << endl ;
    for(i = 1;i<20;i = i+1){
        cout << i << endl ;
    }

    cout << "odd" << endl ;
    for(i = 1;i<20;i = i+2){
        cout << i << endl ;
    }
}