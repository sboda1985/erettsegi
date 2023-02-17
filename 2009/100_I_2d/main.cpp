#include <iostream>

using namespace std;

int main()
{
    int a, b=0;
    cout << "a=";
    cin >> a;
    //while(!((a < 10) && (b == 0))){
    while(a>0)
    {
        b = b + a % 10;
        a = a / 10;
        if (a == 0)
        {
            if (b>10)
            {
                a = b;
                b = 0;
            }
        }
    }
    cout << b << endl;
    return 0;
}
