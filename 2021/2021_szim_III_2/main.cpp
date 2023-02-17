#include <iostream>

using namespace std;

int main()
{
    int a[100][100];
    int n, k, i, j;
    cout << "n=";
    cin >> n;
    cout << "k=";
    cin >> k;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cout << "a[" << i << "][" << j << "]=";
            cin >> a[i][j];
        }
    }
    int temp = a[k-1][k-2];
    for(j=k-2; j>0; j--){
        a[k-1][j] = a[k-1][j-1];
    }
    a[k-1][0] = temp;
    for(i=0; i<n; i++){
        for(j=0; j<k; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Hello world!" << endl;
    return 0;
}
