#include <iostream>

using namespace std;

int abundent(int n)
{
    int S0 = 0;
    for(int i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            S0+=i;
        }
    }
    S0/=n;
    for(int x= n-1; x > 0; x--)
    {
        int S = 0;
        for(int i=1; i<=x; i++)
        {
            if (x%i==0)
            {
                S+=i;
            }
        }
        S/=x;
        if (S > S0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    cout << abundent(6) << endl;
    return 0;
}
