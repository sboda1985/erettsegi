#include <iostream>


using namespace std;

int main()
{
    int a, i, n, x;
    bool prim = true;
    int primekszama = 0;
    cout << "n=";
    cin >> n;
    x = n;
    while(primekszama < 2)
    {
        prim = true;

        for (i=2; i< x/2+1; i++)
        {
            if (x%i==0)
            {
                prim = false;

            }
        }
        if (prim == true)
        {
            primekszama++;
        }
        x++;

    }
    cout << x-2;

    return 0;
}
