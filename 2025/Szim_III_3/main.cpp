#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bijuterii.in");
    int nc, np, x;
    bool potrivit = false;
    int stat[100] = {0};

    in >> nc >> np;

    for(int i= 0; i<nc; i++){
        in >> x;
        if (x > 100){
            x = x/10;
        }
        stat[x] = 1;
    }
    for(int i= 0; i<np; i++){
        in >> x;
        if (x > 100){
            x = x/10;
        }
        if (stat[x] > 0){
            potrivit = true;
        }
        int tukor = x/10 *10 + x%10;
        if (stat[tukor] > 0){
            potrivit = true;
        }
    }
    if (potrivit){
        cout << "DA";
    } else {
        cout << "NU";
    }
    return 0;
}
