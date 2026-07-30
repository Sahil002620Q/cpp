#include <iostream>
using namespace std;

template <typename T>
class calc {
    public:
    T a;
    T b;
    T num(T a,T b)
    {
        T sum = a + b;
        return sum ;
    }
};

int main() {
    calc <int>frosty;
    cout << frosty.num(1,2);
    

}