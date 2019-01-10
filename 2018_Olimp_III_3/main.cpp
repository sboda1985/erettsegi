#include <iostream>

// 1234 -> 443221

using namespace std;

int main()
{
    int szam, parosszamjegy,  paratlanszamjegy, parosS=0, paratlanS=0;
    cout << "Kerem a szamot";
    cin >> szam;
    while (szam > 0){
        parosszamjegy = szam%10;
        szam = szam/10;
        paratlanszamjegy = szam%10;
        szam = szam / 10;
        parosS += parosszamjegy;
        paratlanS += paratlanszamjegy;
    }
    if ((parosS%2 == 0) && (paratlanS%2 == 1)){
    cout << "kiegyensulyozott" << endl;
    } else {
        cout << "nem kiegyensulyozott";
    }
    return 0;
}
