#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.txt");
    bool kiirt = false;

    int current, prev, counter = 1;
    in >> prev;
    while(in >> current){
        if(current == prev) {
            counter++;
        } else {
            if (counter == 2) {
                cout << prev << " ";
                kiirt = true;
            }
            counter = 1;
        }
        prev = current;
    }
    if (counter == 2) {
        cout << prev << " ";
        kiirt = true;
    }

    if (!kiirt) {
        cout << "nem letezik";
    }
    return 0;
}
