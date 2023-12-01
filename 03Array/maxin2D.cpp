#include <iostream>
#include <limits.h>
using namespace std;

int search(int arr[][3], int &row,int &col){
    int max = INT_MIN;   // or  ->   int max = arr[0][0];
      for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
      }
      return max;
}

int main(){
    int arr[3][3] ={{10,20,30},
                    {40,500,60},
                    {70,80,90} };
    int row =3;
    int col=3;

    int x =search(arr,row,col); 
   
        cout<<"max is :"<<x;
    
}