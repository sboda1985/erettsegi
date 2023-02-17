#include <iostream>
#include <string>

using namespace std;

int main()
{
    string szoveg;
    cout << "Kerem a szoveget: " << endl;
    getline(cin, szoveg);
    int n = szoveg.length();
    for(int i=0; i<n-1; i++){
        if(szoveg[i]==szoveg[i+1]){
                if (szoveg[i]>='a' && szoveg[i]<='z'){
            cout << szoveg[i] << szoveg[i+1] << endl;
                }
        }
    }

    return 0;
}
