#include<iostream>
using namespace std;

int main()
{
    int numb = 12345;
    int rev = 0;
    //rev and reorder
    while(numb){
        //get last num for num and add to rev
        rev = rev*10 + numb%10 ;
        //remove last num for num
        numb /= 10;
    }
    cout << rev ;

    return 0;
}