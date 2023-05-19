#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.in");
    int x, pmin, pmax, gpmin=0, gpmax=0;
    in >> pmin;
    in >> pmax;
    if (pmin > pmax) {
        swap(pmin, pmax);
    }
    int p =2;
    while(in >> x){
        p++;
        bool changed = false;
        if (x < pmin ) {
            pmin = x;
            changed = true;
        }
        if (x>pmax) {
            pmax = x;
            changed = true;
        }
        if (!changed){
            gpmax = p;
            if (gpmin == 0) {
                gpmin = p;
            }
        }
    }
    if (gpmax > 0) {
        cout << gpmin << " " << gpmax;
    } else {
        cout << "nem letezik";
    }
    return 0;
}
