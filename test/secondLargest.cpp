#include<iostream>
using namespace std;
#include <climits>


int main(){
    int n;
    cout<<INT_MAX<<endl;
    cout<<INT_MIN<<endl;

    cout<<"enter the no of array elements";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
            cout<<"enter the array element "<<i+1<<": ";
        cin>>arr[i];
    }
    if(n==0||n==1){
        cout<<INT_MIN;
    }
    else{
    int max = INT_MIN;
    for(int i=0;i<n;i++){
	    if(max<arr[i]){
	      max=arr[i];
      }
     }
     int second = INT_MIN;
     for(int i=0;i<n;i++){
	     if(max>arr[i] && arr[i]>second){
	       second = arr[i];
       }
     }
     cout<<"second largest ele is :"<<second;
		 return 0;
}}