#include <iostream>

using namespace std;

int main()
{
    int p1, p2;
    cout << "p1=";
    cin >> p1;
    cout << "p2=";
    cin >> p2;
    int a, b, c, d, e;
    for(a=9; a>0; a--){
        if (p1%a == 0) {
            b=p1/a;
            if (b < 10) {
                for(d=9; d>0; d--){
                    if (p2%d == 0){
                        e = p2/d;
                        if (e < 10) {
                            for(c=9; c>=0; c--){
                                cout << a << b << c << c << c << d << e <<endl;
                            }
                        }
                    }
                }
            }
        }
    }
    /*
    for(int i=10000000; i>1100010; i--){
        int g = i%10;
        int f = i/10%10;
        int e = i/100%10;
        int d = i/1000%10;
        int c = i/10000%10;
        int b = i/100000%10;
        int a = i/1000000%10;
        if ((c == d) && (d == e)) {
            if ((a*b == p1) && (f*g == p2)) {
                cout << i << endl;
            }
        }
    }
    */
    return 0;
}
