#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int i, a, n;
    bool prim = false;
    ifstream kiskutya("input.txt");
    ofstream kismacska("output.txt");

    kiskutya >> n;
    for(i = 0; i< n; i++)
    {
        kiskutya >> a;
        // primszam vizsgalas a ra
        if (prim) {
            kismacska << "1";
        }    else {
            kismacska << 0;
        }
        kismacska << endl;
    }

    kiskutya.close();
    kismacska.close();
    return 0;
}
