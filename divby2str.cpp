#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;
int isdivby2(int x){
    string sx = to_string(x);
    char back = sx.back();
    if (back == '2' || back == '4' || back == '6' || back == '8' || back == '0'){
        cout << "yes";
    }else{
        cout << "no";
    }
    return 0;
}

int main (){
    int num;
    cout << "enter a number to check it's divisibility with 2 : " ; cin >> num ;
    isdivby2(num);
}


//can also be done via x%2 == 0 ?