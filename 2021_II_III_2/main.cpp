#include <iostream>

using namespace std;

int main()
{

    int v[100][100];
    int n;
    cout << " n = ";
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j< n; j++){
            if (j==0) {
                v[i][j] = i+1;
            } else if (i+j == n-1) {
                v[i][j] = n;
            } else if (i+j < n - 1) {
                v[i][j] = v[i][j-1] + 1;
            } else {
                v[i][j] = v[i][j-1] - 1;
            }
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
