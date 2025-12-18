#include <iostream>

using namespace std;

int main()
{
    bool primek[1000];
    for(int i =2; i<1000; i++)
    {
        primek[i] = true;
    }
    int lehetsegesPrim = 2, n;
    cin  >> n;

    while( lehetsegesPrim < n)
    {
        for(int i = 2*lehetsegesPrim; i < n; i+= lehetsegesPrim)
        {
            primek[i] = false;
        }
        lehetsegesPrim++;
        while(!primek[lehetsegesPrim] && lehetsegesPrim <= n)
        {
            lehetsegesPrim++;
        }
    }
    for(int i =2; i<n; i++)
    {
        if (primek[i] && n%i== 0)
        {
            n = n/i;
            i++;
            while(!primek[i])
            {
                i++;
            }
            if (n==i)
            {
                cout << "DA";
            }
            else
            {
                cout << "NU";
            }
            break;
        }
    }
    return 0;
}
