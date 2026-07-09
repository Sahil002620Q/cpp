#include <iostream>
using namespace std;

int main() {
    int lim;
    cout << "enter limit : " ; cin >> lim ;
    for(int i = 1;i <= lim ; i = i + 2 ){
        cout << i << endl ;
    }
    
    int lim2;
    cout << "enter limit : " ; cin >> lim2 ;
    for(int j = 0;j <= lim2 ; j = j + 2 ){
        cout << j << endl ;
    }
}