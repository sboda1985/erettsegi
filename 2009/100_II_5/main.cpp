#include <iostream>

using namespace std;

int main()
{
    int i,j,n,v[100][100];

    cout<<"n=";
    cin>>n;
    for(i=0; i<n+2; i++)
    {
        v[i][0]=9999999999;
        v[0][i]=9999999999;
        v[n+1][i]=999999999;
        v[i][n+1]=9999999999;
    }
    for(i=1; i<n+1; i++)
    {
        for(j=1; j<n+1; j++)
        {
            cout<<"v["<<i<<"]["<<j<<"]=";
            cin>>v[i][j];
            cout<<endl;
        }
    }
    for(i=1; i<n+1; i++)
    {
        for(j=1; j<n+1; j++)
        {
            if(v[i][j]<v[i-1][j] &&
                    v[i][j]<v[i][j+1] &&
                    v[i][j]<v[i+1][j] &&
                    v[i][j]<v[i][j-1])cout<<v[i][j] << " ";
        }
    }

    return 0;
}
