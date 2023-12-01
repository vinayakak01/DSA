#include <iostream>
using namespace std;

void swap2d(int arr[][3],int row,int col)
{
    if(row==col){
    for(int i =0 ; i<row;i++){
        for(int j =0 ; j<i;j++){
       swap(arr[i][j],arr[j][i]);
    }
  
}
for(int i =0 ; i<row;i++){
        for(int j =0 ; j<col;j++){
       cout<<arr[i][j]<<" ";
    }
  cout<<endl;
}
}
else{
    cout<<"enter a square matrix ";
}
}
int main(){
    int arr[3][3] ={{10,20,30},
                    {40,50,60},
                    {70,80,90} };
    int row =3;
    int col=3;
   swap2d(arr,row,col);
    
}