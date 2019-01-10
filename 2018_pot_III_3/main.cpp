#include <iostream>


using namespace std;
int interval(int n)
{
    int a, i,  x;
    bool prim = true;
    int primekszama = 0;
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
    return x - 2;
}
int main()
{

    cout << interval(8);
    return 0;
}
