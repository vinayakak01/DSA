#include<iostream>
using namespace std;


int main(){
    int n=10;
    int i=1;
    while(i<n){
        int j = i,count = 1;
        while(count<i){
            cout<<j-1<<" ";
            j = j + 1;
            count = count + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}