#include <iostream>

using namespace std;

int main()
{
    int a[50][50], n, m;
    cin >> n >> m;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            if (i < j){
                if (j < 10){
                    a[i][j] = i*10+j;
                } else {
                    a[i][j] = i*100+j;
                }
            } else {
                if (i < 10){
                    a[i][j] = j*10+i;
                } else {
                    a[i][j] = j*100+i;
                }

            }
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
