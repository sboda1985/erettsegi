#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int i, j, k, a, b, n,v[1000];
    a = 1;
    b = -1;
    cout << "n=";
    cin >> n;
    ofstream f("bac.out");

    for(i=n; i> 0; i-- )
    {
        if (i%2==0)
        {
            f << -i/2 << " ";
        }
        else
        {
            f << (i+1)/2 << " ";
        }
    }


    f.close();
    return 0;
}
