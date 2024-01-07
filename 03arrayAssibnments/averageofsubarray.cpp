#include <iostream>
#include <climits>
#include <limits.h>


using namespace std;
double avgofsub(int arr[] ,int n ,int k){
    double max=INT_MIN;
    int i=0;
                       
    while (i<=n-k){
            double sum=0;
         for(int j=i;j<i+k;j++){
          sum =sum+arr[j];
         }
         if(sum>max){
            max =sum;
        }
        i++;
    }
    
    return max/k;
  
    
}
int main(){

    int arr[1]={-1};
    int n =1;
    int k =1;
  double  x=  avgofsub(arr,n,k);
   cout<<x;
    }