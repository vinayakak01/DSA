#include <iostream>
using namespace std;
int main()
{
    // int i = 1;
    int n = 5;
    for (int r = 0; r < n; r++)
    {
        for (int c =r+1; c <= n; c++)
        { 
            if(c==r+1||r==0||c==n){
            cout << c;
            }   
          else{
            cout<<" ";
          }
        }
       
        cout << endl;
    }
}