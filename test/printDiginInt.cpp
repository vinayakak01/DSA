#include <iostream>
using namespace std;

int main()
{   
    cout<<"enter a num to rev it :";
    int num;
    cin>>num; 
    int ans=0,r=0;


    while (num > 0)
    {
         r = num % 10;
         ans = ans * 10 + r;
        num = num / 10;
    }
cout<<"reversed num is :"<<ans<<endl;
   
    while (ans > 0)
    {

        int lastdig = ans % 10;
        cout << lastdig << endl;
        ans = ans / 10;
    }
    return 0;
}