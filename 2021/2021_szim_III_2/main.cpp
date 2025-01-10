#include <iostream>

using namespace std;

int main()
{
    int a[100][100];
    int n, k, sor, oszlop;
    cout << "n=";
    cin >> n;
    cout << "k=";
    cin >> k;
    for(sor=0; sor<n; sor++){
        for(oszlop=0; oszlop<n; oszlop++){
            cout << "a[" << sor << "][" << oszlop << "]=";
            cin >> a[sor][oszlop];
        }
    }
    int temp = a[k-1][k-2];
    for(oszlop=k-2; oszlop>0; oszlop--){
        a[k-1][oszlop] = a[k-1][oszlop-1];
    }
    a[k-1][0] = temp;
    for(sor=0; sor<n; sor++){
        for(oszlop=0; oszlop<k; oszlop++){
            cout << a[sor][oszlop] << " ";
        }
        cout << endl;
    }
    return 0;
}
