#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.in");
    int v[1001] = {0};
    int i;
    while(in >> i){
       v[i]++;
    }
    int pal = 0;

    for (i=1; i<1001; i++){
        if (v[i] % 2 == 1) {
            pal++;
        }
    }

    if (pal < 2) {
        cout << "DA";
    } else {
        cout << "NU";
    }

    return 0;
}
