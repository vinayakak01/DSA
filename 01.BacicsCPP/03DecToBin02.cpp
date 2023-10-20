#include<iostream>
#include<cmath>
using namespace std;

int DecToBin01(int n){
    int binaryno = 0;
    int i=0;
    while(n>0){
        int bit =n&1;
        binaryno = bit*pow(10,i++)+binaryno;
        n=n>>1;
    }
    return binaryno;
}
int main(){
    int n;
    cout<<"enter a number to convert from decimal to binary :";
    cin>>n;
    int binary=DecToBin01(n);
    cout<<binary;
    
}