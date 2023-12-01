

#include <iostream>
using namespace std;
int main()
{
    static int i;
    for (i++; ++i; i++) {
        printf("%d ", i);
        if (i == 6)
            break;
    }
    return 0;
}