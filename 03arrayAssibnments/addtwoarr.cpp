#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {2, 1, 4};
    int n = 3;
    int place = 1;
    int sum = 0;
    for (int i = n - 1; i >= 0; i--)
    {

        sum = sum + (arr[i] * place);
        place = place * 10;
    }
    cout<<sum;
}