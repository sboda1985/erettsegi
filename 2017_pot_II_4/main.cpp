#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int n=0;
    for(int i=1; i<=11; i++)
    {
        cout << "s=";
        cin>>s;

        if ((s.find("are", s.length()-3)) != string::npos)
        {
            if (s.find("are") == s.length()-3){
                 n++;
            }

        }
    }

    cout << n;

    return 0;
}
