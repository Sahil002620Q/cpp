#include <iostream>
using namespace std;
int main () {
    int age ;
    cout << "enter your age : "  << endl ;
    cin >> age ;
    cout << "Do you have an indian citizenship ? (Y/N) : " << endl ;
    char choice;
    cin >> choice ;

    if ( (age >= 18) && choice == ('y' || 'Y') ){
        cout << "You are Indian and You can vote " << endl ;
    }else if ( (age < 18) && choice == ('y' || 'Y')) {
        cout << "You are not eligible to vote , the minimum age to vote is 18 " << endl ;
    }else if ( (age >= 18) && choice == ('n' || 'N')){
        cout << "You are not eligible to vote in india " << endl ;
    }else{
        cout << "You are not eliginle to vote either in india or in your region , minimum voting age is 18" << endl ;
    }
}

        // case 1 indian +18 done
        // case 2 indian -18 
        // case 3 non indi +18
        // case 4 non indi -18
        // next code for prob , total prob 

        //full wheather flow
        // enter temperature
        // case 0,10,20,30,40,45,
        // case 0 to 10 .....
        // if 0 to 10 print freezing temperature

        //future app idea , take domain input > show insider image > show real reviews > give rating on putpose like is good for learning or scam , span etc