#include <iostream>
using namespace std;
int main () {
    int x = 8;   //if x = 99 , exe 1 time , if x = 9 or less than 9 , it will run 9 - n time
    do{
        cout << x << endl ;
        x++;
    }
    while(x<10);
}

//syntax
// do {
// _code block to be executed
// }
// while (condition);