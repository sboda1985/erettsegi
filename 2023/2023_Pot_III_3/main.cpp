#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("date.in");
    int n, m, x, nr = 0;
    in >> m;
    in >> n;
    int stat[100] = {0};
    for(int i = 0; i<m; i++){
        in >> x;
        stat[x]++;
    }
    for(int i = 0; i<n; i++){
        in >> x;
        if (stat[x] > 0){
            stat[x]--;
            nr++;
        }
    }
    cout << nr;
    return 0;
}
