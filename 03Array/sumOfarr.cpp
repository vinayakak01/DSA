#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {};
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cout << "enter array element " << i << " :";
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "sum is :" << sum;
}