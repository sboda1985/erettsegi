#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    ifstream in("bac.in");

    int x, startPos=-1, endPos=-1, i=0, nr;
    bool start = false;
    while(in >> x)
    {

        if (x < 0)
        {
            if (!start)
            {
                start = true;
                startPos = i;
            }

            endPos = i;

        }

        i++;
    }

    nr = i - startPos;
    if (endPos + 1 > nr)
    {
        nr = endPos + 1;
    }
    cout << nr << endl;
    return 0;
}
