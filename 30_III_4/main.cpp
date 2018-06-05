#include <iostream>
#include <fstream>

using namespace std;
void f (int x,int y)
{
    int i;
    for (i=x; i<=y; i++)
    {
        cout<<i;
        f(i+1,y);
    }
}
int main()
{
    ifstream file("NUMERE.IN");
    int n, a=0,  b;
    double x;
    file >> n;
    int kontor = 0;
    for(int i= 0; i < n; i++)
    {
        file >> x;
        b = (int)(x);
        if (b > a)
        {
            kontor++;
        }
        a = b;
    }
    cout << kontor << endl;
     f(1,3);
    return 0;
}
