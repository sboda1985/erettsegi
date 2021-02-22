#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, prev=-1, nr;
    ifstream in("bac.txt");
    while (in>>x)
    {
        if (x == prev)
        {
            nr++;
        }
        else
        {
            if (nr == 2)
            {
                cout << prev << " ";
            }
            nr = 1;
        }
        prev = x;
    }
    if (nr == 2)
    {
        cout << prev << " ";
    }
    return 0;
}
