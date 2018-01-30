#include <iostream>

using namespace std;

int main()
{
    int i, n, k;
    string a[100];
    cout << "n=";
    cin >> n;
    for( i = 0; i < n; i++){
        cout << "a[" << i << "]=";
        cin >> a[i];
    }

    cout << "k=";
    cin >> k;

    for (i = 0; i< n; i++){
        if (a[i].length() == k) {
            cout << a[i] << " ";
        }
    }

    for (i = 0; i< n; i++){
        if (a[i].length() != k) {
            cout << a[i] << " ";
        }
    }

    return 0;
}
