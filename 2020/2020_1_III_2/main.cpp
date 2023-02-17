#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cout << "n=";
    cin >> n;
    cout << "k=";
    cin >> k;

    int m[n+1][n*k];
    for(int i=0; i<n+1; i++){
        for (int j=0; j<n*k; j++){
                m[i][j] = 1 + i + j/k;
                cout << m[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
