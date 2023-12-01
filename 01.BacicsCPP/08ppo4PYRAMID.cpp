#include <iostream>
using namespace std;

int main(){
    
     for(int i = 1;i<=5;i=i+1){
    for(int j=5;j>=i;j=j-1){
         cout<<" ";
    }
         for(int k=1;k<=2*i-1;k=k+1){
            cout<<"*";
         }
    
    cout<<endl;
}
}
