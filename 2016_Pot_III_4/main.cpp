#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream ifile("bac.txt");
    int paros1 = 0;
    int paros2 = 0;
    int a,paratlanszamlalo = 0;
    while(ifile >> a){
        if (a%2 == 1){
            paratlanszamlalo++;

        } else if (paratlanszamlalo == 3){
            if (paros2 < a) {
                paros1 = paros2;
                paros2 = a;
            } else if (paros1 < a) {
                paros1 = a;
            }
        }

    }
    cout << paros1 << " " << paros2;
    return 0;
}
