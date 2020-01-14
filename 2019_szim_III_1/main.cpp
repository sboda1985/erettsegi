#include <iostream>

using namespace std;

void inserare(int &n){
   int hatvany = 1, uj = 0;
   int prev = n%10;
   n = n / 10;
   uj+=prev*hatvany;
   hatvany *= 10;
   while(n>0){
        int c = n % 10;
        n = n/10;
        int diff = c - prev;
        if (diff < 0){
            diff = -diff;
        }

        uj+=diff*hatvany;
        hatvany*=10;
        uj+=c*hatvany;
        hatvany*=10;
        prev = c;
   }
   n = uj;
}
int main()
{
    int n = 7255;
    inserare(n);
    cout << n << endl;
    return 0;
}
