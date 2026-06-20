#include <iostream>
#include <string>
using namespace std;

struct bank{
    int balance = 0;
    string name ;

}sam;

void deposit(int add){
    sam.balance += add;
}

int main () {
  bool ch = true;
  while(ch = true){
    int opt;
    switch(opt){
cout << "welcome to xyz bank " << endl ;
cout << "1. add balance " << endl ;
cout << "2. withdraw balance " << endl ;
cout << "3.  " << endl ;
cout << "2. exit " << endl ;

        case 1:
        int add;
        cout << "enter amount to add :";
        cin >> add ;
        deposit(add);
        break;

        case 2:

        break;

        case 3:

        break;

        case 4:
        ch = false;
        break;

    }




  }
  
  
  
  
  
    deposit(20);
    deposit(30);
    cout << sam.balance ;
    
}