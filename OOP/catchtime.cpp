#include <iostream>
#include <windows.h>
using namespace std;
//runtime
int main() 
{
    // time_t now = time(&now); //will be dangerous as we are assigning &now before now is created hence it will generate garbage value
    
    time_t now;
    time(&now);
    cout << now << endl;
    
    //code
    system("sleep 5");
    

    time(&now);
    cout << now << endl;
} //this approach is not good for runtimes as it displays times in second not miliseconds and mostly the runtime is in milisecs