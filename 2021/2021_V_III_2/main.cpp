#include <iostream>

using namespace std;

int main()
{
    int n, m, v[100][100];
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if((i*j)>9) v[i][j] = (i*j)%10;
            else v[i][j] = i*j;
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
