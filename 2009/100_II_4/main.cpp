#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char e[20]="51+73";
    cout << strchr(e,'+')-2 << endl;
   // cout << strstr(e,'+') << endl;
    strcpy(e,strchr(e,'+')+2);
    cout << e;

    return 0;
}
