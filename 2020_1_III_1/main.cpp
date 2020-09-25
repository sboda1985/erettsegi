#include <iostream>

using namespace std;

void putere(int n, int &d, int &p){
    int pmax = 0;
    for(int i=2; i<n; i++){
        p = 0;
        while(n%i == 0){
            p++;
            n /= i;
        }
        if (p >= pmax) {
            pmax = p;
            d = i;
        }
    }
    p = pmax;

}


int main()
{
    int d = 0, p = 0;
    putere(10780, d, p);
    cout << d << " " << p <<  endl;
    return 0;
}
