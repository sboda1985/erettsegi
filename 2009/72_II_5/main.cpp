#include <iostream>

using namespace std;

int main()
{
    int a[100][100];
    int n;
    cout << "n=";
    cin >> n;
    int k = 1, i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j< i + 1; j++)
        {
            a[i-j][j] = k;
            a[n-j-1][n-(i-j)-1] = k;
            k++;
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
