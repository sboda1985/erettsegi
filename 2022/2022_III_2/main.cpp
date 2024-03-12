#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string mh = "aeiou";
    for(int i = 0; i<s.size(); i++)
    {
        bool massalhangzo = true;
        while(massalhangzo)
        {
            for(int j = 0; j<mh.size(); j++)
            {
                if (s[i] == mh[j])
                {
                    massalhangzo = false;
                }
            }
            if (massalhangzo)
            {
                s[i]--;
            }
        }
    }
    cout << s;
    return 0;
}
