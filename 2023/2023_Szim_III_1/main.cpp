#include <iostream>

using namespace std;
void NrImp(int x,int y, int &nr)
{
    int oszto,szam,db=0;
    nr=0;
    for(szam=x; szam<=y; szam++)
    {
        db=0;
        for(oszto=1; oszto<=szam; oszto+=2)
            if(szam%oszto==0)
            {
                db++;
            }
        if(db==3)
            nr++;
    }
}
int main()
{
    int nr;
    NrImp(4,50,nr);
    cout<<nr;
    return 0;
}
