// while (condition) {
//   // code block to be executed
// }

#include <iostream>
#include <windows.h>
#include <random>
using namespace std;
int main () {

    // int i = 0 ;

    // while(i<4){
    //     cout << i << endl ;
    //     i++;
    // }

    // while(i<4){
    //     cout << i << endl ;
    //     ++i;
    // }

    //countdown using while
    int num = 4;
    while (num > 0){
        cout << num << endl;
        num--;
        Sleep(120);
    }
    cout << "boom!" << endl;

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distrib(1,100);
    int random_value = distrib(gen);
    cout << random_value << endl ;
}