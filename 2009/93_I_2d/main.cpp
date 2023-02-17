#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cout << "n=";
    cin >> n;
    cout << "m=";
    cin >> m;

    int S =0;
/*    while(n<m){
        S = S+n;
        n= n+3;
    }

    if (n==m){
        cout << S+n;
    } else {
        cout << "0";
    }*/
    if ((m-n)%3!=0) {
        cout << 0;
    } else {
        //cout << m-n << endl;
        //cout << m+n << endl;
        float a = (((m-n)/3+1)*(m+n))/2.0;
        cout << a;
    }

   // cout << "Hello world!" << endl;
    return 0;
}
