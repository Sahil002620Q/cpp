#include <iostream>
using namespace std;
int main () {
<<<<<<< HEAD
    bool login = true;
    int securityLV = 2;
    bool admin = false;
    if((login == true && ( securityLV <= 2 || admin == true))){
        cout << "access granted" ;
    }else{
        cout << "access denied" ;
    }
}
=======
    bool admin = false;
    bool login = true;
    int securityLV = 3;
    if (login == true && (admin == true || securityLV <=2)){
        cout << "access granted\n" ;
    }else{
        cout << "access denied\n"  ;
    }
}

>>>>>>> 215cfa3fd1ea1b4a4f54d544e875285869e47467
