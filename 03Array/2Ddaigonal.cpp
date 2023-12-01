#include <iostream>
using namespace std;

void diagonalsum(int arr[][3],int row,int col){
    // for(int i =0 ; i<row;i++){
    //     cout<<arr[i][i]<<" ";
    // }
    int i =0;
    int j =col-1;
    while (i<row)
    {
            cout<<arr[i][j]<<" ";
           i++;
           j--;
    }
    
}
int main(){
    int arr[3][3] ={{10,20,30},
                    {40,50,60},
                    {70,80,90} };
    int row =3;
    int col=3;
   diagonalsum(arr,row,col);
    
}