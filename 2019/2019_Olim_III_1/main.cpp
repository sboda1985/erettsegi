#include <iostream>

using namespace std;

int Egal(long a){
    int szamjegy = 0;
    while(a>0){
        int c=a%10;
        a = a/10;
        if (c%2 == 1) {
            if (c!=szamjegy){
                if (szamjegy == 0) {
                    szamjegy = c;
                } else {
                    return 1;
                }
            }
        }
    }
    return 0;
}
int main()
{
    cout << Egal(7240) << endl;
    return 0;
}
