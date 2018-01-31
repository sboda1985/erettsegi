#include <iostream>

using namespace std;

int main()
{
    int n, a[100][100];
    cout << "n=";
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            a[i][j] = (i+j+2)*(i+j+2);
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
