#include <iostream>
#include <limits.h>
using namespace std;

int sumofeachrow(int arr[][3], int &row, int &col)
{
    int sum1=0;
    int  sum2=0;
    int sum3 = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0)
            {
                sum1 = sum1 + arr[i][j];
            }
            if (i == 1)
            {
                sum2 = sum2 + arr[i][j];
            }
            if (i == 2)
            {
                sum3 = sum3 + arr[i][j];
            }
            }}
        cout << "sum of 1st row :" << sum1<<endl;
        cout << "sum of 2nd row :" << sum2<<endl;
        cout << "sum of 3st row :" << sum3<<endl;
    
   
}

int main()
{
    int arr[3][3] = {{10, 20, 30},
                     {40, 500, 60},
                     {70, 80, 90}};
    int row = 3;
    int col = 3;

    sumofeachrow(arr, row, col);

    // cout<<"max is :"<<x;
}