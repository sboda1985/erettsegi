#include <iostream>

using namespace std;

int f (long n, int k)
{
    if (n!=0)
        if(n%10==k)
            return 1+f(n/10,k);
        else return 0;
    else return 0;
}

int main()
{
    cout << f(1213111,1) << endl;
    return 0;
}
