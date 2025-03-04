#include <iostream>

using namespace std;

void secventa(int &n){
    int tmp = 0;
    int hatvany = 1;
    while(n > 0){
        int szamjegy = n%10;
        n /= 10;
        int next = n % 10;
        if (next == 2 && szamjegy == 2){
            tmp = tmp + hatvany*20;
            hatvany *= 10;
            n /= 10;
        } else {
            tmp = tmp + hatvany*szamjegy;
        }
        hatvany *= 10;
    }
   n = tmp;
}

int main()
{
    int n= 202233228;
    secventa(n);

    cout << n << endl;
    return 0;
}
