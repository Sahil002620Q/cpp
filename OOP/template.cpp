#include <iostream>
using namespace std;

template <typename T>
T add(T a,T b){
    return a + b;
}
   
int main() {
    cout << add<int>(2,3) << endl ;
    cout << add<float>(2.5,3) << endl ;
    cout << add<double>(24,3.4) << endl ;
}