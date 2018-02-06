#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;
    string replacement = "#";
    bool talalat = false;

    getline(cin, text);

    for(int i = 0; i < text.size(); i++)
    {
        int length = 0;
        int j = i;
        bool paros = false;

        while(j < text.size() && text[j] != ' ')
        {
            length++;
            j++;
        }

        if(length % 2 == 0)
        {
            text.replace(i, length, replacement);
            talalat = true;
            paros = true;
        }

        if(paros)
        {
            i = j - length + 1;
        }
        else
        {
            i = j;
        }
    }

    if(talalat)
    {
        cout << text;
    }
    else
    {
        cout << "nu exista";
    }

    return 0;
}
