#include<iostream>
using namespace std;
  
  int main(){
    int a,b,c;
    cout<<"enter value of a b c :";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"max of 3 num is :"<<a;
        }
        else{
            cout<<"max of 3 num is :"<<c;
        }
    }
    else{
        if(b>c){
            cout<<"max of 3 num is :"<<b;
        }
        else{
            cout<<"max of 3 num is :"<<c;
        }
    }

  }