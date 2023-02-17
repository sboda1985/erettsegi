#include <iostream>

using namespace std;

int main()
{
    int n,f0=1,f1=1,aux;
    cout << "n=";
    cin >> n;
    int v[n][n];
    v[0][0]=f0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=0 || j!=0){
                v[i][j]=f1;
                aux=f0;
                f0=f1;
                f1=f1+aux;
                if(f1>9)f1=f1%10;
            }
            cout << v[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}
