#include <iostream>

using namespace std;

int divizor(int a, int b, int c){
    int min = a, counter = 0;
    if (min > b) {
        min = b;
    }
    if (min > c) {
        min = c;
    }
    for(int i = 1; i < min; i++){
        if ( (a%i==0) && (b%i==0) && (c%i==0) ){
            counter++;
        }
    }
    return counter;
}
int main()
{
    cout << divizor(24, 20, 12) << endl;
    return 0;
}
