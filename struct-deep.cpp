#include <iostream>
using namespace std;

struct car {
	string brand;
    float engine;
    int manufacturing_year;
    bool available;
    };
    
void myFunction(car n) {  // generate cars on call take one arg in place of n
  cout << "Brand : " << n.brand << "\nengine : " << n.engine << "\nmanufacturing year : " << n.manufacturing_year << "\navailability : " << n.available << endl;
}

int main() {
 car bmw = {"BMW",798.99,2026,true}; //fill info for one 
 myFunction(bmw);
  return 0;
}
