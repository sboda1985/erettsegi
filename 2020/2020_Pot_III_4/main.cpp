#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, y, prev3;
    ofstream out("bac.txt");
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    int prev1 = y;
    int prev2 = x;
    prev3 = prev2;
    while (prev3>0){
        out << prev1 << " ";
        prev3 = 2*prev2 - prev1 + 2;
        prev1 = prev2;
        prev2 = prev3;
    }
    out << prev1 << " " << prev2 ;
    return 0;
}
