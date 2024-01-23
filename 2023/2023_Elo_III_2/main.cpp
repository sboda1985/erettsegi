#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n,i,j,v[50][50] ;
    ifstream in("input.txt");
    in >> n ;
    for(i=0; i<n; i++)
    {
        in >> v[0][i];
    }
    for(i=1; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            v[i][j]=(v[i-1][j]+v[i-1][j+1])%100;
            if(i+j>n-1)
            {
                v[i][j]=-1 ;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout  << v[i][j] << " ";
        }
        cout << endl ;
    }
    return 0;
}
