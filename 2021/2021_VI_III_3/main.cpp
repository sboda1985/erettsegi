#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.in");
    int x, cr1=0, cr2=0, cr3=0, cr4=0, state=1;
    while(in >> x){
        if(x<0){
            if (cr1==0) state = 1;
            else if(cr2==0) state = 2;
            else if (cr3==0) state = 3;
            else if (cr4==0) state = 4;
        } else {
            if(state==1) cr1++;
            else if (state==2) cr2++;
            else if (state==3) cr3++;
            else if (state==4) cr4++;
        }
    }
    if((cr1+cr2)>=(cr2+cr3) && (cr1+cr2)>=(cr3+cr4)){
        cout << cr1+cr2+1 << endl;
    } else if ((cr2+cr3)>=(cr1+cr2) && (cr2+cr3)>=(cr3+cr3)){
        cout << cr2+cr3+1 << endl;
    } else {
        cout << cr3+cr4+1 << endl;
    }
    return 0;
}
