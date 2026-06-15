#include <iostream>
using namespace std;
int main () {
    bool admin = false;
    bool login = true;
    int securityLV = 3;
    if (login == true && (admin == true || securityLV <=2)){
        cout << "access granted\n" ;
    }else{
        cout << "access denied\n"  ;
    }
}

