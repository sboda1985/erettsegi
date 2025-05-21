#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char szoveg[250], x[50], meghivottak[250] = "", temp[250];
    char *vesszo,*nev;
    cin.getline(szoveg, sizeof(szoveg));
    cin >> x;
    nev = szoveg;
    strcat(x, " ");
    while((nev = strstr(nev, x) ) != NULL ){
        vesszo = strchr(nev, ';');
        int length = vesszo - nev - strlen(x);
        for(int i = 0; i < 250; i++){
            temp[i] = '\0';
        }
        strncpy(temp, nev + strlen(x), length);
        strcat(temp, " ");
        strcat(meghivottak, temp);
        nev++;
    }
    cout << meghivottak;
    return 0;
}
