#include <iostream>

using namespace std;

int main()
{
    int m[20][20], n;
    cout << "n=";
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            m[i][j] = n - i - j - 1;
            if (m[i][j] < 0) {
                m[i][j] = - m[i][j];
            }
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
