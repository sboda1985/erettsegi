#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.txt");
    int x, s[10]={0};
    bool had = false;
    while(in >> x){
        if(x%2==0){
            s[x]++;
            had = true;
        }
    }
    if(!had){
        cout << "nu exista";
    }else {
        for(int i=0; i<10; i++){
            for(int j=0; j<s[i]; j++){
                cout << i << " ";
            }
        }
    }
    return 0;
}
