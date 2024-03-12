#include <iostream>

using namespace std;

void secventa(long &n)
{
    long aux=n ;
    int szj,prev=0;
    int ujszam=0 ;
    int szorzo=1 ;

    while(aux>0)
    {
        szj=aux%10;
        aux/=10 ;
        prev=aux%10;

        if(szj==2&& prev==2)
        {
            szj=0 ;
        }
        ujszam=szj*szorzo+ujszam;
        szorzo=szorzo*10 ;

    }

    n=ujszam ;

}
int main()
{
    long n ;

    cout << "n=";
    cin >> n ;
    secventa(n) ;
    cout << n ;

    return 0;
}
