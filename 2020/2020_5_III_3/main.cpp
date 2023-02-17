#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.txt");
    int S = 0, Smax = 0;
    int x;
    while(in >> x){
        S = S + x;
        if (S > Smax) {
            Smax = S;
        }
        if (S < 0) {
            S = 0;
        }
    }
    cout << Smax << endl;
    return 0;
}
