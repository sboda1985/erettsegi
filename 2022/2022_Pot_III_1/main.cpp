#include <iostream>

using namespace std;


void schimb(int &n, int x, int p){
    int tmp = 0;
    int hatvany = 1;
    while(n > 0){
        int szamjegy = n%10;
        n /= 10;
        if (p == 0){
            tmp = tmp + hatvany*x;
        } else {
            tmp = tmp + hatvany*szamjegy;
        }
        hatvany *= 10;
        p--;
    }
   n = tmp;
}
int main()
{
    int  n=12587;
    schimb(n, 6, 3);
    cout << n << endl;
    return 0;
}
