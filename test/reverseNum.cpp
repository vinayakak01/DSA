#include <iostream>
using namespace std;

int main()
{
    int num = 12345;
    int ans=0,r=0;


    while (num > 0)
    {
         r = num % 10;
         ans = ans * 10 + r;
        num = num / 10;
    }
cout<<"reversed num is :"<<ans;
}