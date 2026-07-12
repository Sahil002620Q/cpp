#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

void loading(){
    system("clear");
    cout << "loading...";
    
    Sleep(3000);
    system("cls");
    cout << "logged in";
}

void cls(){
    system("clear");
}

void wrong(){
    cls();
    cout << "loading...";
    
    Sleep(3000);
    system("clear");
    cout << "logged in failed , wrong password";
}

int main () {
    cls();
    int password ;
    cout << "Enter password :" ;
    cin >> password ;
    
    if (password == 12345678)
    {
        loading();
    }
    else
    {
        wrong();
    }
    
}