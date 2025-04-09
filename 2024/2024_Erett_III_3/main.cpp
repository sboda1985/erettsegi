#include <iostream>
#include <fstream>

using namespace std;


int main()
{
    ifstream in("bac.txt");
    int prev, current;
    int minStep=-1, stepLength=0, maxStepLength = 0;
    in >> prev;
    while(in >> current){
        if (prev + 1 == current) {
            stepLength++;
        } else {
            if (stepLength > maxStepLength) {
                maxStepLength = stepLength;
                minStep = prev - stepLength;
            }
            stepLength = 0;
        }
        prev = current;
    }

    if (stepLength > maxStepLength) {
                maxStepLength = stepLength;
                minStep = prev - stepLength;
    }

    for(int i=minStep; i<=minStep + maxStepLength; i++){
        cout << i << " ";
    }
    return 0;
}
