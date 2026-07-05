#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string firstName, lastName;
    getline(cin, firstName);
    getline(cin, lastName);

    for(int i=0; i<= firstName.length(); i++){
        firstName[i] = tolower(firstName[i]);
    }

    for(int j=0; j<= lastName.length(); j++){
        lastName[j] = tolower(lastName[j]);
    }
    string username = firstName + lastName;

  	cout << "Username: " << username << endl ;
  
    int i = 0;
        firstName[i] = toupper(firstName[i]);
    
    int j=0;
        lastName[j] = toupper(lastName[j]);
  
  	cout << "Initials: " << firstName[i] << lastName[j];

   
    return 0;
}