#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a;
    int maxsor=0, maxsorokszama = 0, szamlalo = 0;
    ifstream input("bac.txt");
    while(input >> a)
    {

        if (a % 2 == 0)
        {
            szamlalo++;
        }
        else
        {
            if (szamlalo > maxsor)
            {
                maxsor = szamlalo;
                maxsorokszama = 1;
            }
            else if (szamlalo == maxsor)
            {
                maxsorokszama++;

            }
            szamlalo = 0;
        }

    }
    if (szamlalo > maxsor)
    {
        maxsor = szamlalo;
        maxsorokszama = 1;
    }
    else if (szamlalo == maxsor)
    {
        maxsorokszama++;

    }
    cout << maxsorokszama << endl;
    cout << 3+7/4.0+3;
    return 0;
}
