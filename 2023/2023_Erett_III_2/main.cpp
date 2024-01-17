#include <iostream>

using namespace std;

int main()
{
    int ns, np;
    int v[50][50], max[50];
    cout << "ns = ";
    cin >> ns;
    cout << "np = ";
    cin >> np;
    for(int i = 1; i <= ns; i++){
        max[i] = 0;
        for(int j = 1; j <= np; j++){
            cin >> v[i][j];
            if (v[i][j] > max[i]){
                max[i] = v[i][j];
            }
        }
    }
    for(int i = 1; i <= ns; i++){
        for(int j = 1; j <= np; j++){
            if (v[i][j] == max[i]){
                cout << i << ":" << j << " ";
                break;
            }
        }
    }

    return 0;
}
