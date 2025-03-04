#include <iostream>

using namespace std;

int main()
{
    int a[100][100];
    int m, n;
    cout << "m=";
    cin >> m;
    cout << "n=";
    cin >> n;
    for(int i = 0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 1; i<m; i+=2)
    {
        int min = a[i][0];
        for(int j=1; j<n; j++)
        {
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
        for(int j=0; j<n; j++)
        {
            if (a[i-1][j] > min-1) {
                a[i-1][j] = min -1;
            }
        }
    }
    for(int i = 0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
