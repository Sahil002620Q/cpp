#include <iostream>
using namespace std;
int main () {
    bool login = true;
    int securityLV = 2;
    bool admin = false;
    if((login == true && ( securityLV <= 2 || admin == true))){
        cout << "access granted" ;
    }else{
        cout << "access denied" ;
    }
}