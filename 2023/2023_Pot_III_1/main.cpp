#include <iostream>

using namespace std;


int DNPI(int n){
    cout << 1 << " ";
    for(int i = 9; i<n; i+=2){
        if (n%i == 0){
            bool prim = true;
            for(int j = 3; j<=i/2; j+=2){
                if (i%j == 0){
                    prim = false;
                }
            }
            if (!prim){
                cout << i << " ";
            }
        }
    }
}
int main()
{
    DNPI(90);
    return 0;
}
