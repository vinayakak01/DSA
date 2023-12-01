#include <iostream>
using namespace std;

int linSrch(int arr[],int n ,int key){

     for (int i = 0; i < n; i++){
        if(key==arr[i])
          return i;
    }
    return -1;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int key =5;
int x=   linSrch(arr,n,key);
(x==-1)?cout<<"element not found ":cout<<"element found at position :"<<x;

   
}