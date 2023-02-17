#include <iostream>

using namespace std;

int main()
{
    string szoveg;
    cout << "kerem a szoveget";
    getline(cin, szoveg);
    char maganhangzok[] = {'a', 'e', 'i', 'o', 'u', ' '};

    for(int pos=szoveg.length()-1; pos>=0; pos--){
        bool found = false;
        for(int i = 0; i<6; i++){
            if (szoveg[pos] == maganhangzok[i]){
                found = true;
            }
        }
        if (!found){
            szoveg.replace(pos, 1, "");
            break;
        }
    }
    cout << szoveg;
    return 0;
}
