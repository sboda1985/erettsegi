#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cout << "n=";
    cin >> n;
    cout << "m=";
    cin >> m;
    int a[n][m];

    int kontor = 1;
    for(int i=0; i<n; i++)
    {
        if (i%2 == 0)
        {
            for(int j=0; j<m; j++)
            {
                a[i][j] = kontor;
                kontor++;
            }
        }
        else
        {
            for(int j=m-1; j>=0; j--)
            {
                a[i][j] = kontor;
                kontor++;
            }

        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
