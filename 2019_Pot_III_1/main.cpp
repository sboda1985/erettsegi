#include <iostream>

using namespace std;
int MaxImp(int a, int b)
{

    for(int i=b; i>=a; i--)
    {
        int P=1;
        for(int j=1; j<=i; j+=2)
        {
            if (i%j==0)
            {
                P = P * j;
            }
        }
        if (P > i)
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    cout << MaxImp(0, 16) << endl;
    return 0;
}
