#include <iostream>

using namespace std;

void putere(int n, int &x, int &p){
    for(x =2; x<=n; x++){
        int aux = n;
        p = 0;
        while(aux%x == 0){
            aux /= x;
            p++;
        }
        if (aux == 1){
            return;
        }
    }
}

int main()
{
    int p = 0;
    int x = 0;
    putere(16, x, p);
    cout << "16 " << x << " " << p << endl;
    putere(216, x, p);
    cout << "216 " << x << " " << p << endl;
    putere(12, x, p);
    cout << "12 " << x << " " << p << endl;
    return 0;
}
