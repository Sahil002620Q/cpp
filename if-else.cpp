#include <iostream>
using namespace std;
int main(){
    int x = 10 ;
    int y = 20 ;
    if (x>y){
        cout << x << " is greate than " << y << endl ;
    }else{
        cout << y << " is greater than " << x << endl ;
    }

    //using bool 
    int kx = 30;
    int ky = 20;
    bool idk = ky < kx ;
    if (idk){
        cout << idk << endl;
    }

    //if else
    int xj = 10;
    int yj = 40;
    if(xj>yj){
        cout << "x is max" << endl;
    }else{
        cout << "y is max" << endl;
    }

    //else if ie if()elseif()elseif.....else
    int yu = 40;
    int cu = 80;
    if (yu ==cu){
        cout << "both are equal" << endl;
    }else if (yu > cu){
        cout << "yu is greater" << endl;
    }else{
        cout << "cu is greater " << endl;
    }

    //bool + else if
    int fu = 50 ;
    int su = 30 ;
    bool r = fu>su;
    bool w = su>fu;
    if(w){
        cout << "su greater than fu" << endl;
    }else if (r){
        cout << "fu greater than su" << endl;
    }else{
        cout << "both are equal" << endl << endl;
    }

    //nested if else
    if(-10>0){
        if(30>3){
            cout << "30 max";
        }else{
            cout << "30 min";
        }
    }else{
        cout << "negative" << endl ;
    }


    //short hand if else (new topic)-------------------------------------------------
    int voltage = 220;
    cout << ((voltage > 400) ? "voltage is under 220, everything fine" : "voltage is high, need help!") << endl ;


    //nested if else short hand
    int numb ;    //-2,0,2
    cout << "enter a number :" ; cin >> numb;
    //use string if using to store condition in variable , Operand1 ? Operand2 : Operand3 --need help cin.fail means if i get weong input type
    string nature = (cin.fail()) ? "enter a vailed value" : (numb < 0) ? "negative" : (numb == 0) ? "neither positive nor negative:" : (numb >= 0) ? "positive" : "";
    cout << nature << endl;  //--hard

    
}