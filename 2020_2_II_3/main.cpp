#include <iostream>

using namespace std;

int main()
{
    int a[5][7];
    int i, j;
    for(i=0; i<5; i++){
        a[i][0] = 1;
    }
    for(i=0; i<7; i++){
        a[0][i] = 1;
    }


    for(i=1; i<5; i++){
        for(j=1; j<7; j++){
            a[i][j] = (a[i-1][j] + a[i][j-1])%10;

        }
    }

    for(i=0; i<5; i++){
        for(j=0; j<7; j++){
            cout << a[i][j] << " ";

        }
        cout << endl;
    }

    return 0;
}
