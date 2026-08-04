#include <iostream>
#include <deque>
using namespace std;

int main() 
{
    deque<string> cars ;

    cars.push_front("1.f BMQ");
    cars.push_front("2.f Mercedez");
    cars.push_front("3.fNano");

    for(string car : cars){
       cout << car  << " " ;  
    }

    cout << endl << endl  ;

    cars.push_back("4.b Ferrari");
    cars.push_back("5.b BMQ M4");
    cars.push_back("6.b Volkswagen");

    cars.push_front("7.f Verna");

    for(string car : cars)
    {
        cout << car  << " " ;  
    }
 
    cars.pop_back(); 
    cars.pop_front();  

    cout << endl << endl ; 
    
    for(string car : cars)
    {
        cout << car  << " " ;  
    }

    cout << endl << "element at index 2 : " << cars[2] ;
    cout<< endl << "size : " << cars.size() ;

}