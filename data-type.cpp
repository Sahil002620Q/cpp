#include <iostream>
using namespace std ;
int main () {
    int integer ;
    float floating_number ;
    double long_floating_number ;
    char character ;
    string set_of_character ;

    short Short = 32767;    //maximum limit of short is 32767
    long Long = 2147483647;  //maximum limit of long is 2147483647
    long long LL = 9199568999299999999;
    auto AutoDataTypeDetector = "hii";
    auto var = 's';    //auto x; will not work need to assign value at a time and can not change var having diff data type
    auto var2 = 7294;

    //  like iterators and lambdas, which you will learn more about in a later chapter, we use auto to keep the code cleaner and easier to understand.



    // cout << type(x) ;
    // cout << Short << endl;
    cout <<"long can store max of " << Long << endl ;
    cout << "long long can store max of " << LL << endl;

    // cout << "enter integer value : "; cin >> integer;
    // cout << "enter decimal value : "; cin >> floating_number;
    // cout << "enter decimal value with higher point number : "; cin >> long_floating_number;
    // cout << "enter an alphabet : "; cin >> character;
    // cout << "enter a word : "; cin >> set_of_character; cout <<"\n";
    // cout << integer << " is an integer\n";
    // cout << floating_number << " is a decimal number\n";
    // cout << long_floating_number << " is a decimal number with extra decimal points\n";
    // cout << character << " is an alphabet\n";    
    // cout << set_of_character << " is a word\n";
  
    return 0;
}