#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;

    if ( a < b || b < a ){
        printf("one number is greater than other\n");
    }

    if ( a < b && a < c && a < d ){
        cout << "a is smaller than rest four numbers\n" ;
    }

    if( !(a>b) ){
        cout  << "a is not great than b";
    }
}