#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream in("tomb.in");
    int n;
    in >> n;
    int v[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            in >> v[i][j];
        }
    }

    for(int i=0; i<n; i++){
        cout << v[i][0] << " ";
    }
    for(int i=1; i<n; i++){
        cout << v[n-1][i] << " ";
    }
    for(int i=n-2; i>=0; i--){
        cout << v[i][n-1] << " ";
    }
    for(int i=n-2; i>0; i--){
        cout << v[0][i] << " ";
    }
    return 0;
}
