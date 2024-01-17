#include <iostream>

using namespace std;

int main()
{
    int a[100][100], i, j, n, m, S=0, Sm = 0;

    cout << "m=";
    cin >> m;
    cout << "n=";
    cin >> n;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            cout << "a[" << i << "][" << j << "]=";
            cin >> a[i][j];
        }
    }
    for(i=0; i<m-1; i++){
        for(j=0; j<n-1; j++){
            S = a[i][j] + a[i][j+1] + a[i+1][j] + a[i+1][j+1];
            if (S > Sm) {
                Sm = S;
            }
        }
    }
    cout << Sm << endl;
    return 0;
}
