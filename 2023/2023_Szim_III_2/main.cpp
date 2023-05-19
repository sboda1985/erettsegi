#include <iostream>

using namespace std;

int main()
{
    string szoveg, output;
    string s[3] = {"fam.","gen.","spe."};
    getline(cin, szoveg);
    int lastspace = -1;
    int shortcut = -1;
    char prev = ' ';
    for(int i= 0; i<szoveg.size(); i++)
    {
        if (i-1 == lastspace)
        {
            if (szoveg[i] == 'F' || szoveg[i] == 'f')
            {
                shortcut = 0;
            }
            if (szoveg[i] == 'G' || szoveg[i] == 'g')
            {
                shortcut = 1;
            }
            if (szoveg[i] == 'S' || szoveg[i] == 's')
            {
                shortcut = 2;
            }
        }
        if (szoveg[i] == '.')
        {
            output += s[shortcut][0];
            output += s[shortcut][1];
            output += s[shortcut][2];
            output += s[shortcut][3];
        }
        if (szoveg[i] == ' ')
        {
            if (prev != '.')
            {
                for (int j=lastspace+1; j<i; j++)
                {
                    output += szoveg[j];
                }
            }
            lastspace = i;
            output += " ";
        }
        prev = szoveg[i];
    }
    cout << output << endl;
    return 0;
}
