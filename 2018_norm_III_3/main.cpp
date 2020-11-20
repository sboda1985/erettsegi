#include <iostream>
#include <fstream>

using namespace std;

bool tripla(int prev2, int prev1, int current)
{
    if (prev1 != prev2 && prev1 != current && prev2 != current)
    {
        return true;
    }
    return false;
}


int main()
{
    ifstream in("bac.txt");
    int current, prev1, prev2, length, maxlength = 0;
    in >> prev2;
    in >> prev1;
    in >> current;

    if (tripla(prev2, prev1, current))
    {
        length = 3;
    }
    prev2 = prev1;
    prev1 = current;

    while(in >> current)
    {
        if (tripla(prev2, prev1, current))
        {
            if (length < 3)
            {
                length = 3;
            }
            else
            {
                length++;
            }
        }
        else
        {
            if (maxlength < length)
            {
                maxlength = length;
            }
            length = 1;

        }
        prev2 = prev1;
        prev1 = current;
    }
     if (maxlength < length)
    {
        maxlength = length;
    }

    cout << maxlength << endl;
    return 0;
}
