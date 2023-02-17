#include <iostream>

using namespace std;

int main()
{
    int i, j;
    int a[10][10];
    for(i=1; i<=9; i++){
        for(j=1; j<=9; j++){
            a[i][j] = i;
            if (j<i) {
                a[i][j] = j;
            }
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
