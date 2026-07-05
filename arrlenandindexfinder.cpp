#include <iostream>
#include <vector>
using namespace std ;

void check(int num,const vector<int>& arr){
    // not vaild while using vectorint len = sizeof(arr) / sizeof(arr[0]);
    int len = arr.size();
    cout << "length of array is : " << len << endl;
    int i;
    for(i=0;i<len;i++)
    {
        if(arr[i] == num)
        {
            cout << num << " is at index : " << i ;
        }
   
    }


}

int main () {
   vector<int> arr = {1,3,6,2,9};
   check(3,arr);
   
    }
    
    
