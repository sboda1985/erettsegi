#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.txt");
    int x, min = 100, max = 9;
    while(in >> x){
        if (x>9 && x < 100) {
            if (x > max){
                max = x;
            }
            if (x < min){
                min = x;
            }
        }
    }
    min--;
    max++;
    cout << min << " " << max << endl;
    return 0;
}
