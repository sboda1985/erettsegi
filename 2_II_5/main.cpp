#include <iostream>
#include <string>

using namespace std;

int main()
{
    string szo;
    cin >> szo;

    string kicsi = "aeiou";
    string nagy = "AEIOU";

    for(int i = 0; i < 5; i++)
    {

        size_t hely = szo.find(kicsi[i]);
        while(hely!=string::npos)
        {
            string x = " ";
            x[0] = nagy[i];
            szo.insert(hely+1, x);
            hely= szo.find(kicsi[i], hely+2);
        }
    }
    cout << szo;

    return 0;
}
