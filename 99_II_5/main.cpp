#include <iostream>

using namespace std;

int main()
{
    int a[100][100];
    int n;
    cout << "n=";
    cin >> n;
    for(int i =0; i< n; i++){
        for(int j = 0; j< n; j++){
            if (i > j) {
                a[i][j] = i+1;
            } else {
                a[i][j] = j+1;
            }
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    //cout << "Hello world!" << endl;
    return 0;
}
