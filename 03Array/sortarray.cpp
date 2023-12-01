#include <iostream>
using namespace std;

void separateNegAndPostive(int arr[], int n)
{
   
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
         if(arr[j]>arr[j+1])
            swap(arr[j], arr[j+1]);
        }
    }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    int main()
    {
        int arr[7] = {23, -7, 12, -10, -11, 40, 60};
        int size = 7;
        separateNegAndPostive(arr, size);
    }