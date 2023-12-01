#include <iostream>
#include <limits.h>
using namespace std;

int min(int arr[], int n){
    int min = arr[0];
     int max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min)
        min= arr[i];
          else if(arr[i]>max)
        max= arr[i];
    }
    return min,max;
    cout<<"minimum number is :"<<min<<endl;
    cout<<"max number is :"<<max<<endl;
}

// void max(int arr[], int n){
//     int max = arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>max)
//         max= arr[i];
//     }
//     cout<<"max number is :"<<max<<endl;
// }

int main(){
    int n = 6;
    int arr[n]={-1,1,2,3,4,5};
   cout<< min(arr,n);
    // max(arr,n);

}