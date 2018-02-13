#include <iostream>

using namespace std;

void cifra(int n,int& x){
    while(n!=0){
        if(x==9)break;
        if(n%10>x)x=n%10;
        n=n/10;
    }
}

int main()
{
    int n,x=0;
    cout <<"n=";
    cin >> n;
    cifra(n,x);
    if(x<=4)cout <<"Da";
    else cout <<"Nu";
    return 0;
}
