// #include <iostream>
// using namespace std;
// int main () {
//     for(int i = 1;i <= 10;++i){
//         if(i == 4){
//             cout << "skipped" << endl;
//             continue;
//         }
//             cout << i << endl ;
//     }

// }


#include <iostream>
using namespace std;
int main () {
    int x = 1 ;
    while(x <= 10){
        if(x == 7){
            //need to know whay x++ before continue
            x++;
            continue;
        }
        cout << x << endl;
        x++;
    }
    
}