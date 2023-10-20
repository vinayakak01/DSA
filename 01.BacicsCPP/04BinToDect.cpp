#include<iostream>
#include<cmath>
using namespace std;

int bintodec(int n){
    int decno = 0;
    int i=0;
    while(n>0){
        int bit =n%10;
        decno = bit*pow(2,i++)+decno;
        n=n/10;
    }
    return decno;
}
int main(){
    int n;
    cout<<"enter a number to convert from  binary to decimal :";
    cin>>n;
    int dec=bintodec(n);
    cout<<dec;
    
}
