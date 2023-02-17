#include <iostream>

using namespace std;

int main()
{
    int a[100][100];
    int i, j, n, m;
    cout << "n=";
    cin >> n;
    cout << "m=";
    cin >> m;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cout << "a[" << i << "][" << j << "]=";
            cin >> a[i][j];
        }
    }
    int x = a[n-1][m-1];
    for(i=0; i<n; i++){
        a[i][0] = x;
        a[i][m-1] = x;
    }

    for(j=0; j<m; j++){
        a[0][j] = x;
        a[n-1][j] = x;
    }

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
