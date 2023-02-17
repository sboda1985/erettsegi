#include <iostream>

using namespace std;

int main()
{
    int n,i, j, m;
    cout << "m=";
    cin >> m;
    cout << "n=";
    cin >> n;

    int v[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << "v[" << i << "][" << j << "]=";
            cin >> v[i][j];
        }
    }

    bool szim = true;
    for(int i=0; i<m; i++){
        for(int j=0; j<n/2; j++){
                if (v[i][j] != v[i][n-j-1]) {
                szim = false;
            }
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    if (szim) {
        cout << "DA";
    } else {
        cout << "NU";
    }
    return 0;
}
