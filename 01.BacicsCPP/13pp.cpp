#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter a number";
cin>>n;
int i=1;
for(int row=0;row<n;row=row+1){
    for(int col=0;col<row+1;col=col+1){
        cout<<i++<<" ";
    }
    cout<<endl;
}

}