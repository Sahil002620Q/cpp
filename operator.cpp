#include <iostream>
using namespace std;
int main () {
    //operator
    int any = 20 + 30;
    int sum1 = 100 + 50;
    float sum2 = sum1 + 50;
    // char NumWord = sum2 + 'i';   return symbols and number change char val
    cout << sum1 << endl << sum2 << endl ;

    // //  Arithmetic Operators
    int x = 10+20 ;    
    int y = 10-20 ;
    int z = 10*20 ;
    int k = 10/20 ;
    int l = 10%20 ;
    int m = 10+20-99 ;
    int n = 10-2-20 ;
    int o = 10*4/4*20 ;
    cout << x << endl << y << endl << z << endl << k << endl << l << endl << m << endl << n << endl << o ;

    cout << (x + y) << endl ;

    int num1 = 30;
    ++ num1 ;
    cout << num1 << endl ;

    int num2 = 30 ;
    num2-- ;
    cout << num2 ;

    //assignment operator
    int n1 = 2;
    n1 += 2;

    int no1 = 3;
    no1 = 3;
    cout << no1 << endl ;

    int no2 = 3;
    no2 += 3 ;
    cout << no2 << endl ;

    int no3 = 3;
    no3 -= 3;
    cout << no3 << endl ;

    int no4 = 3;
    no4 *= 3;
    cout << no4 << endl ;

    int no5 = 3;
    no5 /= 3;
    cout << no5 << endl ;

    int no6 = 3;
    no6 %= 3;
    cout << no6 << endl ;

    int no7 = 3;
    no7 &= 3;
    cout << no7 << endl ;

    int no8 = 3;
    no8 |= 3;
    cout << no8 << endl ;

    int no9 = 3;
    no9 ^= 3;
    cout << no9 << endl ;

    auto no10 = 3;
    no10 <<= 3;
    cout << no10 << endl ;

    auto no11 = 3;
    no11 >>= 3;    
    cout << no11 << endl ;

    auto no12 = 3;
    no12 ^= 3;
    cout << no12 << endl ;

    //compound assignment operator
    int nu1 = 3;
    nu1 +=7;
    cout << nu1 << endl ;

    nu1 -=5;
    cout << nu1 << endl ;

    //comparison operator
    int vg = 3;
    int vgx = 9;
    cout << (vg<vgx) << endl ;  // 0 false 1 true
    cout << (vg>vgx) << endl ;

    cout << (vg == vgx) << endl ;
    cout << (vg != vgx) << endl ;
    cout << (vg <= vgx) << endl ;
    cout << (vg >= vgx) << endl ;

    //logical operator
    //1 logical and
    int xc = 9;
    int xv = 20;
    cout << (xc == xv && xc <= xv) << endl ;    //logical and &&
    cout << !(xc == xv && xc <= xv) << endl ;   //logical not !
    cout << (xc != xv || xc <= xv) << endl ;    //lpgical or ||

    bool ghost = false;
    cout << "do ghost exist " << !ghost << endl;

    //priority sign ie bodmas
    cout << double(2*4/8+6-8) << endl;
    cout << double(2*5||8/2) << endl;

}