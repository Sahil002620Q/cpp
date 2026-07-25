#include <iostream>
using namespace std;

int plusFunc(int x, int y) {
  return x + y;
}

int plusFunc(int x, int y, int z) {
  return x + y + z;
}

int plusFunc(int x, int y, int z,int d) {
  return x + y + z + d;
}


int main() {
    
    int result1 = plusFunc(3, 7);
    int result2 = plusFunc(1, 2, 3);
    int result3 = plusFunc(1, 2, 9, 3);

    cout << "Sum of 2 numbers: " << result1 << "\n";
    cout << "Sum of 3 numbers: " << result2 << endl ;
    cout << "Sum of 4 numbers: " << result3;

    return 0;
}
