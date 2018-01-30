#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream in("bac.in");
    int a, v[1001]= {0};
    int max = 0;
    int min = 1001;
    int n = 0;
    while (in >> a)
    {
        v[a] = 1;
        if (a> max)
        {
            max = a;
        }
        if (min > a)
        {
            min = a;
        }
        n++;
    }

    int counter = 0;
    int counter2 = 0;
    int index = 0;
    bool halad = true;
    for(int i = min+1; i < max; i++)
    {
        if (v[i]==0)
        {
            counter++;
        }
        else
        {
            if (index != 0)
            {
                if (counter2 != counter)
                {
                    halad = false;
                }
            }
            counter2 = counter;
            counter = 0;
            index++;
        }
    }
    cout << endl;

    if (halad)
    {
        cout << counter+1;
    }
    else
    {
        cout << "Nu";
    }

    return 0;
}
