#include <iostream>
using namespace std ;
int main () {
    int integer ;
    float floating_number ;
    double long_floating_number ;
    char character ;
    string set_of_character ;

    cout << "enter integer value : "; cin >> integer;
    cout << "enter decimal value : "; cin >> floating_number;
    cout << "enter decimal value with higher point number : "; cin >> long_floating_number;
    cout << "enter an alphabet : "; cin >> character;
    cout << "enter a word : "; cin >> set_of_character; cout <<"\n";
    cout << integer << " is an integer\n";
    cout << floating_number << " is a decimal number\n";
    cout << long_floating_number << " is a decimal number with extra decimal points\n";
    cout << character << " is an alphabet\n";    
    cout << set_of_character << " is a word\n";
  
    return 0;
}