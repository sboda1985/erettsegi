#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.txt");
    int lepes = 0, x,prev = -1, max = -1;
    while(in >> x){
        lepes++;
        if (x > max){
            max = x;
            cout << lepes << " ";
        } else if (x == max && prev != x){
            cout << lepes << " ";
        }
        prev = x;
    }
    return 0;
}
