#include <iostream>

using namespace std;

void imog(int x, int y, int &rez)
{
    int ujszam=0, ujszam2 = 0;
    int hatvany = 1;
    bool szamjegyek = false;
    while(x>0)
    {
        int szj = x%10;
        x = x/10;
        if (szj %2 == 1)
        {
            ujszam = ujszam*10 + szj;
        }
    }


    while(y>0)
    {
        int szj = y%10;
        y /= 10;
        if (szj % 2 == 1)
        {
            ujszam2 = ujszam2 + szj*hatvany;
            hatvany = hatvany*10;
        }
    }
    //cout << ujszam << " " << ujszam2 << endl;
    if ((ujszam == ujszam2)  && (ujszam > 0))
    {
        rez = 1;
    }
    else
    {
        rez = 0;
    }
}

int main()
{
    int rez = 0;
    imog(623, 380, rez);
    cout << rez;
    return 0;
}
