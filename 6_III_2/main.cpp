#include <iostream>

using namespace std;


int f(int a, int b)
{
    if (b<1) return -1;
    else if (a%b==0)
        return 1+f(a/b,b);
    else
        return 0;
}

int main()
{
    //cout << f(6,3) << endl;
    cout << f(28,2) << endl;
    return 0;
}
