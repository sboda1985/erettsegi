#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n,counter=0,countermax=255;
    string real,current,mh="aeiou";
    cout << "n=";
    cin >> n;
    cin.ignore(); //Ez azert, hogy a getline ne kezelje az n erteket, mint sort

    for(int i=0;i<n;i++){
        getline(cin,current);
        for(int j=0;j<current.length();j++){
            for(int z=0;z<mh.length();z++){
                if(current[j]==mh[z]){
                    counter++;
                    break;
                }
            }
        }
        if(counter<=countermax){
            countermax=counter;
            real=current;
        }
        counter=0;
        current.clear();
    }

    cout << endl <<"keresett="<< real;

    return 0;
}
