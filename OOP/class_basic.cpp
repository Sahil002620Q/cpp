#include <iostream>
using namespace std;
class animal{
    public:
    string breed;
    int life_spawn;

};


int main () {
    animal dog;
    dog.breed = "percian";
    dog.life_spawn = 12;
    cout << "breed : "<< dog.breed ;
    
    cout << "\nlife spawn : "<< dog.life_spawn ;

}