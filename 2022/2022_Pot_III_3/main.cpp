#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.txt");
    int x, y, nr = 1, max = 0, maxnr = 0;
    in >> y;
    while(in >> x)
    {
        if (x %2 == y % 2)
        {
            nr++;
        }
        else
        {
            if (nr == max)
            {
                maxnr++;
            }
            if (nr > max)
            {
                max = nr;
                maxnr = 1;
            }
            nr = 1;
        }
        y = x;
    }
    if (nr == max)
    {
        maxnr++;
    }
    if (nr > max)
    {
        max = nr;
        maxnr = 1;
    }
    cout << maxnr << " " << max << endl;
    return 0;
}
