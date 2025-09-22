#include <iostream>

using namespace std;

int ascendent(int n, int x, int y){
    int i, S = 0;
    int hasonlitoSzamjegy = n %10;
    for(int i =x; i <=y; i++)
    {
        int temp = i;
        bool nagyobb = true;
        while(temp > 0)
        {
            int szamjegy = temp % 10;
            temp = temp / 10;
            if (szamjegy < hasonlitoSzamjegy)
            {
                nagyobb = false;
            }
        }
        if (nagyobb) {
            S += i;
        }
    }
    return S;
}

int main()
{
    cout << ascendent(827, 9, 800) << endl;
    return 0;
}
