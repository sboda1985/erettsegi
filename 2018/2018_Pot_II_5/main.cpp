#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    int n, i, j;
    cout << "n=";
    cin >> n;
    int a[n][n];
    j=1;
    for(i=0; i<n; i++)
    {
        cin >> a[i][j];

    }
    for(j=3; j<n; j+=2)
    {
        for(i=0; i<n; i++)
        {
            a[i][j] = a[i][j-2];

        }
    }
     for(j=0; j<n; j+=2)
    {
        for(i=0; i<n; i++)
        {
            a[i][j] = a[n-i-1][1];

        }
    }

    for ( i = 0; i<n; i++ )
    {
        for ( j = 0; j<n; j++ )
        {

            cout<<a[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}
