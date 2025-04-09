#include <iostream>

using namespace std;

int main()
{
    int n;
    string sor, str;
    bool imposibil = false;

    in >> n;
    string szavak[n];
    for(int i = 0; i<n; i++)
    cin >> szavak[i];
    cout << "kerem a mondatot";
    getline(cin, sor);
    getline(cin, sor);
    sor = sor + " ";
    char prevkarakter = ' ';
    int nr = 0;
    string sor2 = "";

    for(char karakter : sor)
    {
        if (karakter == '*')
        {
            nr++;
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
