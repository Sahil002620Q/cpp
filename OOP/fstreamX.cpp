#include <iostream>
#include<string>
#include <fstream>
using namespace std;



int main() {

    ofstream myfile("srcfst.txt");
    myfile << "Hello from fstream!";
    myfile << "this file is created using fstream library" << endl ;
    myfile << "Use ofstream for write and override operation \nUse ifstream for read only\nUse fstream of read write or overriding a file";
    myfile.close();
    cout << "done!" ;


    string content;
    ifstream myfileR("srcfst.txt");

    while ( getline (myfileR,content)){
        cout << content;
    }
    myfile.close();
}