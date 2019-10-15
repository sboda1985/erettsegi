#include <iostream>

using namespace std;

int main()
{
    string a;
    cout << "Kerem a stringet ";
    getline(cin, a);
    char max = '0';
    size_t pos = a.find(" ");
    while(pos!=string::npos){
        int index = pos+1;
        if (a[index] >= '0' && a[index] <='9') {
            if (a[index] > max) {
                max = a[index];
            }
        }
        pos = a.find(" ", index);
    }
    string szam = " ";
    szam = szam + max;
    pos = a.find(szam);
    int pos2 = a.find(" ", pos+1);
    if (pos2 == string::npos) {
        pos2 = a.length();
    }
    string x = "";
    x.append(a, pos+1, pos2-pos);
    cout << x << endl;
    return 0;
}
