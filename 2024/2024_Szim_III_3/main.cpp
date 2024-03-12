#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.in");
    int v[1000] = {0};
    int i;
    while(in >> i){
        v[i]++;
    }
    bool api = true;
    for(i = 0; i<1000; i++){
        if (v[i] > 0)
        if ((v[i] > i)  || (v[i] %2 != i %2 )) {
            api = false;
        }
    }
    if (api) {
        cout << "DA";
    } else {
        cout << "NU";
    }
    return 0;
}
