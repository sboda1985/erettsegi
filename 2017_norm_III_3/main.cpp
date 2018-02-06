#include <iostream>

using namespace std;

int nrDiv(int a, int b)
{
    int k = 0;

    for(int i = a; i <= b; i++)
    {
        int j = 1;

        while(j * (j + 1) <= i)
        {
            if(j * (j + 1) == i)
            {
                k++;
                break;
            }
            else
            {
                j++;
            }
        }
    }

    return k;
}

int main()
{
    cout << nrDiv(10, 40);
    return 0;
}
