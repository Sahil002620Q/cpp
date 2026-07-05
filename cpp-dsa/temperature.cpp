
#include <iostream>
#include <iomanip>
using namespace std;
  
//fixed setprecision --hard

int main() {
    int celsius;
    cin >> celsius;
    double fahrenheit = (celsius * 9.0/5)  + 32;
    cout << celsius << " Celsius = " << fixed << setprecision(1) << double(fahrenheit) << " Fahrenheit" ;
    return 0;
}