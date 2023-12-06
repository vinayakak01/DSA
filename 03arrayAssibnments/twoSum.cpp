#include <iostream>
using namespace std;
bool twosum(int arr[],int n,int sum){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum)
            return true;
        }
    }
    return false;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n =5;
    int sum =10;
  bool x=  twosum(arr,n,sum);
    if(x)
    cout<<"YES";
    else
    cout<<"NO";
    }