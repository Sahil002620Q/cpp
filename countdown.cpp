#include <iostream>
#include <chrono>
#include <thread>
#include <cstdlib>
using namespace std;
int main () {
    for(int i = 10;i > 0;i--){
        cout << i << endl;
        this_thread::sleep_for(chrono::seconds(1));
        system("cls");
    }
    system("cls");
    cout << "boom!";
}