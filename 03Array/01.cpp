#include <iostream>
using namespace std;
int main(){
    int arr[10]={};
    int n =10;
    for(int i=0;i<n;i++){
        cout<<"enter array element "<<i<<" :";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
         arr[i]=2*arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
}