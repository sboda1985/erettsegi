#include <iostream>

using namespace std;

int main()
{
    int a[10][10];
    int i, j, n=9;
    for(i=0; i<9; i++){
        for(j=0; j<9; j++){
            a[i][j] = 1;
            if ((i+j == 7) || (i+j == 8) || (i+j == 9)){
                a[i][j] = 8;
            }
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
