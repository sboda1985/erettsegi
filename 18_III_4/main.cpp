#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream nr1("nr1.txt");
    ifstream nr2("nr2.txt");

    int x, y;
    int n, m;
    nr1>>n;
    nr2>>m;
    nr1>>x;
    nr2>>y;
    n--;m--;
    int a=0;
    while(n>0 && m>0){
        if (x<y){
            while(x<y && n>0){
                cout << x << " ";
                nr1 >> x;
                n--;
                a = 1;
            }
        }
        if (y<x){
            while(y<x && m > 0){
                cout << y << " ";
                nr2 >> y;
                m--;
                a = 2;
            }
        }

        if (x==y && n > 0 && m > 0){
            cout << x << " ";
            nr1>>x;
            nr2>>y;
            a = 3;
            n--;
            m--;
        }
    }
    if (a==3){
        if (x<y){
            cout << x << " " << y;
        } else if (x>y){
            cout << y << " " << x;
        } else {
            cout << x;
        }
    }
    while(n>0){
       cout << x << " ";
       nr1>>x;
       n--;
    }
    while(m>0){
       cout << y << " ";
       nr2>>y;
       m--;
    }
    /*
    int v[10000] = {0};

    int n, i, min=10000, max=-1;
    nr1 >> n;
    for(i=0; i<n; i++){
        int x;
        nr1>>x;

        if (x>max){
            max = x;
        }
        if (x < min) {
            min = x;
        }
        v[x]++;
    }

    nr2 >> n;
    for(i=0; i<n; i++){
        int x;
        nr2>>x;

        if (x>max){
            max = x;
        }
        if (x < min) {
            min = x;
        }
        v[x]++;
    }

    for(i=min; i<max; i++){
        if (v[i] > 0) {
            cout << i << " ";
        }
    }*/
    return 0;
}
