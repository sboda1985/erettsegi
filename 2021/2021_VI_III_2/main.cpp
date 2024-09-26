#include <iostream>

using namespace std;

int main()
{
    int n, v[100][100] = {0};
    cin >> n;
    int cn = n-1, nc = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i+j==n-1) v[i][j]=0;
            else if (i+j<n-1) v[i][j] = cn-j;
            else if (i+j>n-1) v[i][j] = (j+nc)-(n-1);
        }
        cn--;
        nc++;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
