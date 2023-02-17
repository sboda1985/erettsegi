#include <iostream>

using namespace std;

int main()
{
    int a[20][20], n, m;
    cout << "n=";
    cin >> n;
    cout << "m=";
    cin >> m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {

            cout << "a["<<i << "][" << j<<"]=" << " ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    int nr = 0;
    for(int j=1; j<m; j++)
    {
        bool complementer = true;
        for(int i=0; i<n; i++)
        {
            if ((a[i][j] + a[i][0]) != 1){
                complementer = false;
            }
        }
        if (complementer) {
            nr++;
        }
    }
    cout << nr;

    return 0;
}
