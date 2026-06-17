#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

void loading(){
    cout << "loading...";
    system("clear");
    Sleep(3000);
    cout << "logged in";
}

void wrong(){
    cout << "loading...";
    system("clear");
    Sleep(3000);
    cout << "logged in failed , wrong password";
}

int main () {
    int password ;
    cout << "Enter password :" ;
    cin >> password ;
    if (password == 12345678){
        loading();
    }else{
        wrong();
    }
}