#include <iostream>
using namespace std;
int main(){
int n=0;
int numOfDig;
cout<<"enter number of  digits";
    cin>>numOfDig;

for(int i =0;i<numOfDig;i++){
    int digit;
    cout<<"enter the digits";
    cin>>digit;
    n= n*10+digit;
}
cout<<"digit is :"<<n;
}