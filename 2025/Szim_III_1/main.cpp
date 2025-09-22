#include <iostream>

using namespace std;

void harsad(int k, int &n){
    for(int szam = k; szam > 0; szam--){
        int temp = szam;
        int S = 0;
        while(temp > 0){
            S += temp%10;
            temp /= 10;
        }
        if (szam%S == 0){
            n = szam;
            return;
        }
    }
}


int main()
{
    int n;
    harsad(2027, n);
    cout << n << endl;
    return 0;
}
