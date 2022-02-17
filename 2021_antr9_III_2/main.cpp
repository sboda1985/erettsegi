#include <iostream>
#include <string>

using namespace std;

int main()
{
    int m=0;
    string szoveg, mh="aeiou";
    getline(cin,szoveg);
    string szo = "";
    for(int i=0 ; i<szoveg.size() ; i++)
    {
        if(szoveg[i]!=' ')
        {
            szo=szo + szoveg[i];
        }
        if (szoveg[i] == ' ' || i == szoveg.size()-1)
        {
            int stat[5] = {0,0,0,0,0};
            for(int mhindex = 0; mhindex < mh.size(); mhindex++)
            {
                for(int szoindex = 0; szoindex < szo.size(); szoindex++)
                {
                    if (mh[mhindex] == szo[szoindex]) {
                        stat[mhindex]++;
                    }
                }
            }
            int szamlalo = 0;
            for(int index = 0; index < 5; index++) {
                if (stat[index] > 0) {
                    szamlalo++;
                }
            }
            if (szamlalo == 1) {
                cout << szo << endl;
            }
            szo= "";
        }
    }
    return 0;
}
