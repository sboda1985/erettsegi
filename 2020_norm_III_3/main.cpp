#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int s[1001] = {0};
    ifstream in("bac.in");
    int x, min = 1002, max = -1;
    while (in >> x){
        s[x]++;
        if (x < min) {
            min = x;
        }
        if (x > max) {
            max = x;
        }
        
    }
    int counter = 0;
    for(int i = min; i<max+1; i++){
        if (s[i]%2 == 1){
            counter++;
        }
    }
    if ( counter > 1) {
        cout << "NU";
    } else {
        cout << "DA";
    }

    return 0;
}
