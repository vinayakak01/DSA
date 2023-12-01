#include <iostream>
using namespace std;

 int count =0;
int countsetbits(int n){
    // int count =0;
    while(n>0){
        int rem = n%2;
        if(rem == 1)
           count = count+1;
        n=n/2;
    }
    return count;
    }
int main(){
 int bits = countsetbits(10);
 cout<<bits;
    
}