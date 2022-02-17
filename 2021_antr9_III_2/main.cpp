#include <iostream>

using namespace std;

int main()
{
    string szoveg;
    getline(cin , szoveg);
    int sz1=-1,sz2;
    for(int i=0 ; i<szoveg.size() ;i++){
        if(szoveg[i]==' '){
            sz2=i;
        }
    }
    return 0;
}
