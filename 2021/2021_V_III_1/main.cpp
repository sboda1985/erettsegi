#include <iostream>

using namespace std;

int identice(int n){
    int temp, szj;
    bool state = true;
    temp=n%10;
    n/=10;
    while(n>0){
        szj=n%10;
        n/=10;
        if(temp!=szj) state = false;
    }
    if(state) return 1;
    return 0;
}

int main()
{
    cout << identice(2222);
    return 0;
}
