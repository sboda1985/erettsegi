#include <iostream>

using namespace std;

int abundent(int n)
{
    double Sn = 0;
    for(int i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            Sn+=i;
        }
    }
    Sn/=n;
    for(int x= n-1; x > 0; x--)
    {
        double S = 0;
        for(int i=1; i<=x; i++)
        {
            if (x%i==0)
            {
                S+=i;
            }
        }
        S/=x;
        if (S > Sn)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    cout << abundent(4) << endl;
    return 0;
}
