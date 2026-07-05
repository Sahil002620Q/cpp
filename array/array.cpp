#include <iostream>
using namespace std;
int main () {
    int arr[5] = {1,2,3,4,5};
    string car[3] = {"BMW" , "Volkswagen" , "lamborgini"};

    for (int j = 0; j < 5; j++)
    {
        cout << j << " = " << arr[j] << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << i << " = " <<  car[i] << endl;
    }
    
    cout << "access by element" << endl ;       //
    cout << car[0] << endl << arr[0] << endl ;

    cout << "change value by element" << endl ; //
    car[1] = "Omni";
    arr[3] = 99;
    cout << car[1] << endl << arr[3] << endl ;


    
}