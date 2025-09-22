#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.in");
    int minZ, minP;
    in >> minZ >> minP;
    int dayP, S = 0, dayNr = 1, start = 1;
    bool valid = false;
    while(in >> dayP)
    {
        if (dayP >= minZ)
        {
            if (S == 0)
            {
                start = dayNr;
                S = dayP;
            }
            else
            {
                S += dayP;
            }
        }
        else
        {
            if (S >= minP && dayNr - start > 1)
            {
                cout << start << " " << dayNr - 1 << " " << S << endl;
                valid = true;
            }
            S = 0;
        }
        dayNr++;
    }
    if (S > minP && dayNr - start > 1)
    {
        cout << start << " " << dayNr - 1 << " " << S << endl;
        valid = true;
    }
    if (!valid)
    {
        cout << "nu exista";
    }

    return 0;
}
