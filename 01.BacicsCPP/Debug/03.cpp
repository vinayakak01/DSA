#include<iostream>
using namespace std;

int main() {
    int i,j,n;;
    cout<<"enter value of n";
    cin>>n;
    for(i=n;i>=0;i--){
        char p='A'+i;
        for(j=1;j<=n-i;j++){
                    // char p='A'+i;
            cout<<p;
            p++;  
        }
        cout<<endl;
    }
}