#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n;
    string sor, str;
    ifstream in("input.txt");
    bool imposibil = false;

    in >> n;
    string szavak[n];
    for(int i = 0; i<n ; i++)
    {
        in >> szavak[i];
    }
    while(in >> str){
        sor += str;
        sor += " ";
    }
    sor += " ";
    char prevkarakter = ' ';
    int nr = 0;
    string sor2 = "";
    for(char karakter : sor)
    {
        if (karakter == '*')
        {
            if (prevkarakter == ' ')
            {
                nr++ ;
            }
            if (prevkarakter == '*')
            {
                nr++;
            }
        }

        if (karakter == ' ')
        {
            if (prevkarakter == '*')
            {
                imposibil = true;
                for(int i = 0; i<n ; i++)
                {
                    if(szavak[i].size() == nr)
                    {
                        sor2 += szavak[i];
                        imposibil = false;
                        break;
                    }
                }
            }
            nr = 0;
        }
        if (karakter != '*')
        {
            sor2 += karakter;
        }
        prevkarakter = karakter;
    }
    if (!imposibil)
    {
        cout << sor2;
    }
    else
    {
        cout << "imposibil";
    }
    return 0;
}
