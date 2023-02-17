#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input("bac.txt");
    int kiir1, kiir2, x, prev, n;
    input >> x;
    input >> prev;
    while (input >> n){
        if (prev % 1000 == x && n%1000 == x){
            kiir1 = prev;
            kiir2 = n;
        }
        prev = n;
    }
    cout << kiir1<< " " << kiir2 << endl;
    return 0;
}
