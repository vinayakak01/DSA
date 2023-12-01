#include <iostream>
using namespace std;

void separateNegAndPostive(int arr[], int n)
{
  int j = 0;
  for (int i = 0; i < n; i++)
  {
      // int j = 0;

    if (arr[i] < 0)
    {
        swap(arr[i], arr[j]);
        j++;
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}
int main()
{
  int arr[7] = {23,-7,12,-10,-11,40,60};
  int size = 7;
  separateNegAndPostive(arr, size);
}