#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream read("numere.in");
    int stat[10]={0};
    int n,minim=10;
    read>>n;

    while(read>>n){
        stat[n]++;
        if(n<minim && n>=1)minim=n;
    }

    cout << minim;
    stat[minim]--;

    //Az n es minim valtozokat ujrahasznositom, n = kiirt szamjegyek szama-1
    n=0;
    minim=0;

    while(n<9){
        while(stat[minim]!=0){
            if(n>=9)break;
            cout << minim;
            stat[minim]--;
            n++;
        }
        minim++;
    }
    return 0;
}
