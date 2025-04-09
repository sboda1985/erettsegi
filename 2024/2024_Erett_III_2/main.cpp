#include <iostream>

using namespace std;

int main()
{
    string szo;
    bool ugyanaz = true;
    getline(cin, szo);
    int pos, prevpos=0;
    int length, prevlength = -1;
    for(int i = 0; i < szo.size(); i++ ){
        if (szo[i]== ' '){
            pos = i;
            length = pos - prevpos;
            if (prevlength == -1){
                prevlength = length;
            }
            if (prevlength != length){
                ugyanaz = false;
            }
            prevpos = pos+1;
        }
    }
    length = szo.size() - prevpos;
    if (prevlength != length){
        ugyanaz = false;
    }

    if (ugyanaz){
        cout << "DA " << length;
    } else {
        cout << "NU";
    }
    return 0;
}
