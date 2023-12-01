#include <iostream>
using namespace std;
int main(){
    int n =3;
    for(int r =0;r<n;r++){
    for(int c=0;r<n-r;c++){
        if(r==0||r==n-1){
            cout<<"+ ";
        }
        else{
            if(c==0||c==n-r){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        }
    }
    cout<<endl;
    }
}