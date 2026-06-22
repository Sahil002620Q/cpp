#include <iostream>
using namespace std;

int add(int x,int y){
    int z = x + y;
    cout << z << endl ;
    return 0;
}

int sub(int x,int y){
    int z = x - y;
    cout << z << endl ;
    return 0;
}

int multi(int x,int y){
    int z = x * y;
    cout << z << endl ;
    return 0;
}

int divint(int x,int y){
    int z = x / y;
    cout << z << endl ;
    return 0;
}

float divfloat(float x,float y){
    float z = x / y;
    cout << z << endl ;
    return 0;
}

int sq(int x){
    int z = x*x;
    cout << z << endl ;
    return 0;
}

int cube(int x){
    int z = x*x*x;
    cout << z << endl ;
    return 0;
}

int isdivby2(int x){
    string sx = to_string(x);
    char back = sx.back();
    if (back == '2' || back == '4' || back == '6' || back == '8' || back == '0'){
        cout << "yes" << endl ;
    }else{
        cout << "no" << endl ;
    }
    return 0;
}

int max(int x,int y){
    if(x>y){
        cout << x << " is greater than " << y << endl;
    }else{
        cout << y << " is greater than " << x << endl ;
    }
    return 0;
}

int min(int x,int y){
    if(x<y){
        cout << y << " is greater than " << x << endl ;
    }else{
        cout << x << " is greater than " << y << endl ;
    }
    return 0;
}

int max(int x,int y,int z){ 
    if(x>y && x>z){
        cout << x << " is greater than " << y << " and " << z << endl ;
    }else if(y>x && y>z){
        cout << y << " is greater than " << x << " and " << z << endl ;
    }else{
        cout << z << " is greater than " << y << " and " << x << endl ;
    }
    return 0;
}

int min(int x,int y,int z){
    if(x<y && x<z){
        cout << x << " is smaller than " << y << " and " << z << endl ;
    }else if(y<x && y<z){
        cout << y << " is smaller than " << x << " and " << z << endl ;
    }else{
        cout << z << " is smaller than " << y << " and " << x << endl ;
    }
    return 0;
}

int fact(int n) {
    int fact = 1;
    for(int i = 1 ; i <= n ; i++){
        fact = fact*i;
    }

    cout << n << "! = "  << fact  << endl;
    return 0;
}

int main () {
    cube(5);
    sq(7);
    isdivby2(3);
    min(2,4);
    min(2,3,4);
    fact(5);
    
}