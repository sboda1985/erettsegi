#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int szam;
    int sor[1000] = { 0 };
    bool api = true;

    ifstream in("bac.in");

    while (in >> szam)
    {
        sor[szam] ++;
    }

    for (szam = 0; szam < 1000; szam++)
    {
        if (sor[szam] > szam || sor[szam] % 2 != szam % 2)
        {
            if (sor[szam] > 0)
            {
                api = false;
            }
        }
    }

    if (api) cout << "Da";
    else cout << "Nu";

    return 0;
}
