#include <iostream>
#include <fstream>

using namespace std;
string maganhangzok = "aeiou";

int maganhangzo(string szo, int index){
    for(int i = 0; i< maganhangzok.length(); i++){
        if (szo[index] == maganhangzok[i]) {
            return i;
        }
    }
    return -1;
}

using namespace std;

int main()
{
    ifstream in("input.in");
    string szo;
    int stat[25] = {0};
    int max = 0;
    while(in >> szo){
            //cout << szo << endl;
        for(int index = 0; index < szo.length()-1; index++){
                int mh_1 = maganhangzo(szo, index);
                int mh_2 = maganhangzo(szo, index+1);
            if (mh_1 >= 0 && mh_2  >= 0){
                int stat_index = mh_1*5+mh_2;
                stat[stat_index]++;
                if (stat[stat_index] > max) {
                    max = stat[stat_index];
                }
            }
        }
    }
    for(int index = 0; index < 25; index++){
        if (stat[index] == max) {
            cout << maganhangzok[index/5] << maganhangzok[index%5] << " ";
        }

    }
    return 0;
}
