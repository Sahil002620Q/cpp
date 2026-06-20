
// #include <iostream>
// #include <algorithm>
// #include <string>
// #include <cctype>
// using namespace std;

// int main() {
//     string firstName, lastName;
//     getline(cin, firstName);
//     getline(cin, lastName);

    
// //     for(int i=0; i<= firstName.length(); i++){
// //         firstName[i] = tolower(firstName[i]);
// //     }

// //     for(int j=0; j<= lastName.length(); j++){
// //         lastName[j] = tolower(lastName[j]);
// //     }
// //     string username = firstName + lastName;
    
// //    // string ini1 = firstName[0] ;

// //     cout << username;


//     int i = 0;
//         firstName[i] = toupper(firstName[i]);
    

//     int j=0;
//         lastName[j] = toupper(lastName[j]);
    
//     cout<<  firstName[i] << lastName[j];

//     // Create initials (uppercase first letters)

//     // Print results
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
    getline(cin, name);
    cin >> age;

    if(age>=18){
        cout << name << " can vote";
    }else{
        cout << name << " cannot vote";
    }

    return 0;
}
