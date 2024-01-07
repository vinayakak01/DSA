#include<iostream>
using namespace std;

int main(){
    int n;
    int sum=0;
    cout<<"enter the array size :";
    cin >> n;
    int input[n];
    for(int i=0;i<n;i++){
        cout<<"enter the array element "<<i+1<<" ";
        cin >> input[i];
    }
     for(int i=0; i<n; i++){

         sum = sum + input[i];
     }
    cout <<"output is :"<< sum << endl;
    return 0;
}

void linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return i;
        }
    }
    return -1;
}