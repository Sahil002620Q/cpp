#include <iostream>
#include <stdlib.h>
#include <thread>
#include <chrono>

using namespace std;

void loading(){
    cout << "loading...";
    this_thread::sleep_for(chrono::seconds(3));
    system("clear");
    cout << "logged in";
}

void wrong(){
    cout << "loading...";
    this_thread::sleep_for(chrono::seconds(3));
    system("clear");
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