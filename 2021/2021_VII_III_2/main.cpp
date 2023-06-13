#include <iostream>

using namespace std;

int main()
{
    int x,sz,n=0,v[100][100]={0},s[10];
    cin >> x;
    sz=x;
    while(sz!=0){
        s[n]=sz%10;
        sz/=10;
        n++;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            v[i][j] = s[n-j-1];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
