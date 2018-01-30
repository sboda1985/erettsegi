#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream input("bac.in");
    int i, j, n;
    int a[100] = {0};
    int max = 0;
    int maxindex = 0;
    int minindex = 100;
    input >> n;
    for(j = 0; j< n; j++)
    {
        input >> i;
        a[i] ++;
        if (a[i] > max)
        {
            max = a[i];
        }
        if (maxindex < i)
        {
            maxindex = i;
        }
        if (minindex > i)
        {
            minindex = i;
        }
    }

    for(i = minindex; i< maxindex + 1; i++)
    {

        if (a[i]==max)
            cout << i << " ";

    }
    return 0;
}
