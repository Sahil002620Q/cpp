#include <iostream>
#include <ctime>
using namespace std;


int main() {

    time_t now = time(nullptr); //time_t is kindaa datatype , now is variable , time() is used to fetch current time
    cout << now << endl;
    cout <<  "second since epoch from 1 jan 1970 : " << now << endl ;
    cout << "current time : " << ctime(&now);

}