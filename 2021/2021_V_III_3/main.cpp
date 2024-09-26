#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.txt");
    int x, temp, max=-1;
    in >> x;
    in >> temp;
    cout << temp << " ";
    while(in >> x){
        if(temp>max && temp>=x) max = temp;
        else if(x>max && x>=temp) max = x;
        cout << max << " ";
    }
    return 0;
}
