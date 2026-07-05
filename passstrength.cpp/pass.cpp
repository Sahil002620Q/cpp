#include <iostream>
using namespace std;
int main () {
    int pass;
    cout << "enter your password : " ; cin >> pass;

    if(pass == 1234){
        cout << "Access Granted " ;        
    }else if(pass > 1000 && pass < 9999 && pass != 1234){
        cout << "Weak Password " ;       
    }else{
        cout << "Invailed Format";
    }

    // string opt = (pass == 1234) ? "Access Granted": (pass > 1000 && pass < 9999 && pass != 1234) ? "Weak Password" : "Invailed Format";
    // cout << opt ;
    return 0;
}

