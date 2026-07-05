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