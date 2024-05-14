#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    ifstream in("bac.txt");
    int prefix[100] = {0};
    int sufix[100] = {0};
    int n;
    while(in >> n)
    {
        if (n > 99)
        {
            sufix[n%100]++;
            if (n > 999)
            {
                prefix[n/100]++;
            }
            else
            {
                prefix[n/10]++;
            }
        }
    }
    int nr = 0;
    for(int i = 10; i<100; i++)
    {
        if (prefix[i] == sufix[i] && prefix[i] > 0)
        {
            nr++;
        }
    }
    cout << nr;


    return 0;
}
