#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> num = {1,4,2,5,3,2,6,5,8,6,9,7,0,8,5,6,8,2,4}; //unique element + arranged in order , cannot access via index
    for (int i : num)
    {
        cout << i << " " ;
    }

    cout << endl ;

    set<string> car = {"BMW","Volvo","Verna"};
    car.erase("Volvo");
    for (string i : car)
    {
        cout << i << " " ;
    }

}