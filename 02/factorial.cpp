#include <iostream>
using namespace std;
// int n =10;
int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return (n) * fact(n-1);
    }
}
int main()
{
    // int x = factorial(5);
    cout << "factorial is :" << fact(3);
}