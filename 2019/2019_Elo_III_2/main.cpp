#include <iostream>

using namespace std;

int main()
{
    string a;
    cout << "Kerem a stringet ";
    getline(cin, a);
    int n;
    cout << "kerem a hosszt";
    cin >> n;
    int prev = 0, counter = 0;
    size_t pos = a.find(" ");
    while(pos!=string::npos){
        if (pos-prev == n){
            string x = "";
            x.append(a, prev, n);
            cout << x << endl;
            counter++;
        }
        prev = pos+1;
        pos = a.find(" ", prev);
    }
    if (a.length()-prev == n){
        string x = "";
        x.append(a, prev, n);
        cout << x << endl;
        counter++;
    }
    if (counter == 0) {
        cout << "nu exista";
    }

    return 0;
}
