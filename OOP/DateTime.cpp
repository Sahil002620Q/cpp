#include <iostream>
#include <ctime>
using namespace std;


int main() {

    time_t now = time(nullptr); //time_t is kindaa datatype , now is variable , time() is used to fetch current time
    cout << now << endl; //using nullptr we are saying that we are not giving you any ptr loc hence it will return that value there and that returned value will be assigned to now variable
    cout <<  "second since epoch from 1 jan 1970 : " << now << endl ;
    cout << "current time : " << ctime(&now);
    cout << "Unix epoch was starts at 1 jan 1970 00:00:00 UTC " ;
    cout << "so time stored as second sinc unix epoch";

}