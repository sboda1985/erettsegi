#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.txt");
    int x, y, z, csere;
    in >> x;
    in >> y;
    bool usedx = false;
    bool usedy = false;
    if (x > y)
    {
        csere = x;
        x = y;
        y = csere;
    }
    while(in >> z)
    {
        if (x < z && !usedx)
        {
            usedx = true;
            cout << x << " ";
        }
        if (y < z && ! usedy)
        {
            usedy = true;
            cout << y << " ";
        }

        cout << z << " ";

    }

    if ( !usedx)
    {
        cout << x << " ";
    }
    if ( ! usedy)
    {
        cout << y << " ";
    }
    return 0;
}
