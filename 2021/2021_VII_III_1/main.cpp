#include <iostream>

using namespace std;

void afisare(int x, int y, int k){
    int cr=1;
    for(int i=x; i<=y; i++){
        if(cr==k){
            cout << i << " * ";
            cr = 1;
        } else if (i==y && cr!=k){
            cout << i << " *";
        } else {
            cout << i << " ";
            cr++;
        }
    }
}

int main()
{
    afisare(11,21,4);
    return 0;
}
