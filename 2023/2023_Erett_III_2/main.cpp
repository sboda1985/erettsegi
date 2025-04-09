#include <iostream>

using namespace std;

int main()
{
    int ns, np;
    int v[50][50];
    cout << "ns = ";
    cin >> ns;
    cout << "np = ";
    cin >> np;
    for(int i = 1; i <= ns; i++)
    {
        for(int j = 1; j <= np; j++)
        {
            cin >> v[i][j];
        }
    }
    for(int i = 1; i <= ns; i++)
    {
        int oszlop = 0, max = -1;
        for(int j = 1; j <= np; j++)
        {
            if (v[i][j] > max)
            {
                max = v[i][j];
                oszlop = j;
            }
        }
        cout << i << ":" << oszlop << " ";
    }

    return 0;
}
