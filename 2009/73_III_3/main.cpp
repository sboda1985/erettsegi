#include <iostream>
#include <fstream>

using namespace std;

int cautare(int x[],int n, int v){
    if(x[n/2]>v){
        for(int i=0;i<=n/2;i++){
            if(x[i]>v)return i;
        }
    }
    if(x[n/2]<v){
        for(int i=n/2;i<n;i++){
            if(x[i]>v)return i;
        }
    }
}

int main()
{
    ifstream read("sir.in");
    ofstream write("sir.out");
    int v[1001]={10000};
    int k,i=1;
    read >> k;
    v[0]=k;
    while(read>>k){
        int l=cautare(v,i,k);
        if(v[l]!=10000){
            for(int j=i;j>=l;j--){
                v[j+1]=v[j];
            }
        }
        v[l]=k;
        i++;
    }

    for(int j=0;j<i;j++){
        if(j!=0 && j%10==0) write << endl;
        write << v[j] << " ";
    }


    return 0;
}
