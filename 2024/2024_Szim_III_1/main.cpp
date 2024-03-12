#include <iostream>

using namespace std;
int Impare (int n)
{
    int ujszam = 0, hatvany = 1, szamjegy;

    while(n>0)
    {
        szamjegy=n%10;
        n=n/10;
        ujszam  = ujszam + szamjegy * hatvany;
        hatvany = hatvany *10;
        if(szamjegy%2!=0)
        {
            ujszam = ujszam + szamjegy * hatvany;
            hatvany = hatvany * 10;
        }
    }
    return ujszam;
}

int main()
{
    cout<<Impare(3361);
    return 0;
}
