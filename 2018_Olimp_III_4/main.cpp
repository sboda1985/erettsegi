#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int elso[10] = {0};
    int utolso[10] = {0};
    int szamlalo=1, max1=0, a = 0;
    ifstream inputfile("bac.txt");
    while (inputfile >> a)
    {
        if(elso[a] == 0)
        {
            elso[a] = szamlalo;
        }

        utolso[a] = szamlalo;

        szamlalo++;
        if (max1 < (utolso[a] - elso[a]+1))
        {
            max1 = utolso[a] - elso[a]+1;
        }
    }
    cout << max1 << endl;
    for(int i=0; i<10; i++)
    {

        if (max1 == (utolso[i] - elso[i]+1))
        {
            cout << i << " ";
        }

    }
    return 0;
}
