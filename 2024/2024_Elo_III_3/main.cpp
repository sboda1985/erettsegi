#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("numere.in");
    int maxszamjegy = 0, elso = -1, utolso = -1, szam;
    while(in >> szam){
        if (szam % 10 == maxszamjegy || szam /10%10 == maxszamjegy){
            utolso = szam;
        }
        if (szam % 10 > maxszamjegy){
            maxszamjegy = szam % 10;
            elso = szam;
            utolso = -1;
        }
        if (szam / 10 % 10 > maxszamjegy){
            maxszamjegy = szam / 10 % 10;
            elso = szam;
            utolso = -1;
        }
    }
    if (utolso > -1){
        cout << elso << " " << utolso;
    } else {
        cout << "nu exista";
    }
    return 0;
}
