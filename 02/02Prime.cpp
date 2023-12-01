#include <iostream>
using namespace std;

int prime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count = count + 1;
        }
    }
    if (count == 2)
    {
        cout << n << " is a prime number" << endl;
    }
    else
    {
        cout << n << " is not a prime number" << endl;
    }
}
int main()
{
    int n;
    cout<<"enter number to check prime :";
    cin>>n;
    prime(n);
}
