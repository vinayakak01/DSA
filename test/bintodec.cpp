#include<iostream>
 #include <math.h>
using namespace std;

int main() {
    int n,sum=0,i=0;
    cin>>n;
    while(n>0){
        int digit = n%10;
        sum = sum + pow(2,i++)*digit;
        n = n/10;
    }
    cout<<sum;
    return 0;
    // int n =5;
    // int f=1;
    // for(int i=0;i<n;i++){
    //     f = 2*f;
    // }
    // cout<<f;
}