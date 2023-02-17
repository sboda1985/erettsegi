#include <iostream>

using namespace std;

void divPrim(int n, int &s)
{   s = 0;
    int nr=0, oszto=2;
    while(oszto <=n)
    {
        nr = 0;
        while(n%oszto == 0)
        {
            n /= oszto;
            nr++;
        }
        if (nr%2==1)
        {
            s+=oszto;
        }
        oszto++;
    }

}

int main()
{
    int s;
    divPrim(360, s);
    cout << s << endl;
    divPrim(16, s);
    cout << s << endl;
    return 0;
}
