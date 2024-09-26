#include <iostream>

using namespace std;

int identice(int n){
    int temp, szj;
    bool state = true;
    temp=n%10;
    n/=10;
    while(n>0){
        szj=n%10;
        n/=10;
        if(temp!=szj) state = false;
    }
    if(state) return 1;
    return 0;
}

void numar(int n, int c, int &m){
    int szj, temp, p=1, cn=n;
    n=0;
    if(identice(cn) == 1){
        m=-1;
    } else {
        while(cn!=0){
            szj = cn%10;
            if(szj!=0 && szj!=c){
                n=szj*p+n;
                p*=10;
            }
            cn/=10;
        }
        m=cn;
    }
}

int main()
{
    int n=555, c=5, m=0;
    numar(n,c,m);
    cout << m;
    return 0;
}
