#include <iostream>

using namespace std;

int main()
{
    int a[100][100], n, m, nr = 0;
    cout << " n = ";
    cin >> n;
    cout << " m = ";
    cin >> m;
    for(int sor=m-1; sor > -1; sor--){
        for(int oszlop = n-1; oszlop > -1; oszlop --){
            a[sor][oszlop] = nr*nr;
            nr += 2;
        }
    }
    for(int sor = 0; sor<m; sor++){
        for(int oszlop = 0; oszlop < n; oszlop++){
            cout << a[sor][oszlop] << " ";
        }
        cout << endl;
    }
    return 0;
}
