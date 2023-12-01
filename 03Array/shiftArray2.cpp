#include <iostream>
using namespace std;

void shiftArray(int arr[], int n,int k) {
    int temp[] = {arr[n-2],arr[n - 1]};
    
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - 2];
    }
for (int i = 0; i <k; i++) {
        arr[i] = temp[i];
   
}
}

int main() {
    int arr[] = {1, 2, 3, 4, 5,6};
    int n = 6;
    int k =2;
    shiftArray(arr, n,k);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
