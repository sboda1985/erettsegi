#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.in");
    int x, n=0, v[100], a = 100, b=100;
    while(in >> x){
        if(a%10==(a/10)%10 || a==x) a--;
        if(b%10==(b/10)%10 || b==x || b==a) b--;
    }

    if(a<10) cout << "nu exista";
    else cout << a << " " << b;
    return 0;
}
