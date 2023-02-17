#include <iostream>

using namespace std;

int main()
{
    double a[100][100];
    int i, j, n, m;
    cout << "n=";
    cin >> n;

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cout << "a[" << i << "][" << j << "]=";
            cin >> a[i][j];
        }
    }

    for(i=n; i>n/2; i--){
        for(j=0; j<n; j++){
            a[i][j] = a[i-1][j];
        }
    }

    for(j=0; j<n; j++){
        a[n/2][j] = 0;
    }

    for(j=0; j<n; j++){
        double S = 0.0;
        for(i=0; i<n+1; i++){
            S+=a[i][j];
        }
        a[n/2][j] = S/n;
    }


    for(i=0; i<n+1; i++){
        for(j=0; j<n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
