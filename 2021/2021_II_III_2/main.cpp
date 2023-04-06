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
                if (i+j <= n-1) {
                    v[i][j] = (i+j+1);
                } else {
                    v[i][j] = (n-1) - (i+j) + (n);
                }
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
