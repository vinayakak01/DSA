#include <iostream>
using namespace std;

int main()
{
    int a, b, ans = 0;
    cout << "calulator" << endl;
    cout<<"enter numbers for operation"<<endl;
    cin>>a >> b;
    int op;
    cout << "enter \n-0 for add \n-1 for sub \n-2 for mul \n-3 for div"<<endl;
    cin >> op;
    switch (op)
    {
    case -0:
        ans = a + b;
        break;
    case -1:
        ans = a - b;
        break;
    case -2:
        ans = a * b;
        break;
    case -3:
        ans = a / b;
        break;

    default:
        cout << "invalid entery";
        return 0;
        break;
    }
    cout << "answer is " << ans << endl;
    return 0;
}