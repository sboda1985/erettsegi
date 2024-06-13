#include <iostream>

using namespace std;

int fulgi(int n){
    int stat[10] = {0}, nr = 0, i;
    while(n>0){
        stat[n%10]++;
        nr++;
        n /= 10;
    }
    if (nr != 9) {
        return 0;
    }
    for(i=5; i<10; i++){
        if (stat[i] > 0){
            return 0;
        }
    }
    if (stat[0] > 0) {
        return 0;
    }
    for(i=1; i<5; i++){
        if (stat[i] == 0){
            return 0;
        }
    }
    return 1;
}

int main()
{

    cout << 112243413 << " " << fulgi(112243413) << endl;
    cout << 12314 << " " << fulgi(12314) << endl;
    cout << 112253513 << " " << fulgi(112253513) << endl;
    cout << 112243457 << " " << fulgi(112243457) << endl;
    cout << 111122223 << " " << fulgi(111122223) << endl;
    return 0;
}
