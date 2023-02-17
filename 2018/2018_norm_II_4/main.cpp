#include <iostream>

using namespace std;

int main()
{
    int i, j;
    int a[9][9];
    for(i=0; i<9; i++)
    {
        for(j=0; j<9; j++)
        {
            a[i][j] = 0;
            if (i+j < 8)
            {
                a[i][j] = i+j;
            }
            else if (i+j > 8)
            {
                a[i][j] = i+j-8;
            }

            if ((i==j) || (i+j == 8))
            {
                a[i][j] = 0;
            }

            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
