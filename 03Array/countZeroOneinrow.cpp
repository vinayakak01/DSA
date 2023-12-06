#include <iostream>
using namespace std;

void shiftArray(int arr[][3], int row,int col) {
    
   for(int i =0;i<row;i++){
    int count =0;
    for(int j =0;j<col;j++){
        if(arr[i][j]==1){
            count++;
        }
        
    }
    cout<<count<<endl;
   }
}

int main() {
    int arr[3][3] = {{1,0,1},
                   {0,0,0},
                   {1,1,1}};
    int  row = 3;
    int col=3;
    shiftArray(arr, row,col);

    

    return 0;
}
