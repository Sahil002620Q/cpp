//method are functions that belongs to class
//have two methods to defin functions
// 1 inside class defination , 2 outdside class defination
#include <iostream>
using namespace std;

class myClass {
    public:
    int sum(int x,int y){ //2 parameters
        return x + y ;
    }

    int product(int x,int y);
};


int myClass::product(int x,int y){
    return x*y;
}

int main () {
    myClass obj;

    int c = obj.sum(4,3);
    cout << c << endl ;

    myClass obj2;

    int p = obj2.product(4,5);
    cout << p ;
}