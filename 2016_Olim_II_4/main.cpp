#include <iostream>

using namespace std;
struct parcare
{
    int nrLocuriInchiriate;
    int pretOra;
} p[20];


int main()
{
    int s = 0;
    for(int i=0; i<20; i++)
    {
        s+=p[i].nrLocuriInchiriate*p[i].pretOra;
    }
    cout << "S=" << s;
    return 0;
}
