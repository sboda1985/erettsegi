#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string szoveg;
    cout << "kerem a szoveget";
    getline(cin, szoveg);

    size_t found;
    transform(szoveg.begin(), szoveg.begin()+1, szoveg.begin(), ::toupper);
    found = szoveg.find(" ");
    while(found != string::npos ){
        transform(szoveg.begin()+found+1, szoveg.begin()+found+2, szoveg.begin()+found + 1, ::toupper);
        found = szoveg.find(" ", found+1);
    }
    /*
    if (szoveg[0] != ' '){
        szoveg[0] -= 32;
    }
    for(int i = 1; i<szoveg.length(); i++){
        if(szoveg[i]>=97 && szoveg[i] <=122){
            if(szoveg[i-1] == ' '){
                szoveg[i] -= 32;
            }
        }
    }*/
    cout << szoveg;
    return 0;
}
