#include <iostream>
using namespace std;

bool checkMember(int n)
{
    int f1 = 0, f2 = 1;
    if (n == 0 || n == 1)
    {
        return true;
    }
    else
    {
        while (1)
        {
            int temp = f1 + f2;
            f1 = f2;
            f2 = temp;
            if (temp == n)
            {
                return true;
            }
            else if(temp>n)
            {
                return false;
            }
        }
    }
}
    int main()
    {
        int n = 13;
        bool x = checkMember(n);
        if (x)
            cout << n << " is a member of fibbonaci series";
        else
            cout << n << " is NOT a member of fibbonaci series";
    }