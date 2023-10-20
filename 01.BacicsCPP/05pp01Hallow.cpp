#include <iostream>
using namespace std;

int main(){
  int r=10;
  int c=7;
  for(int row = 0;row<r;row=row+1){
    for(int col=0;col<c;col=col+1){
        if(row==0||row==r-1){
            cout<<"* ";
        }
        else{
            if(col==0||col==c-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
    }
    cout<<endl;
  }
}
