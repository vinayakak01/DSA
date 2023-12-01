#include <iostream>
using namespace std;

bool srch2dArray(int arr[][3], int &row,int &col,int &key){
      for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            if(arr[i][j]==key){
                return true;
            }
        }
      }
      return false;
}

int main(){
    int arr[3][3] ={{10,20,30},
                    {40,50,60},
                    {70,80,90} };
    int row =3;
    int col=3;
    int key =21;
    bool x =srch2dArray(arr,row,col,key); 
    if(x){
        cout<<"element is found ";
    }       
    else{
        cout<<"element NOT found";
    }
}