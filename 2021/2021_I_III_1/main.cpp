#include <iostream>

using namespace std;

void  divX(int n, int x){
    for(int i = n*x; i>0; i-=x){
        cout << i << " ";
    }
}

int main()
{
    divX(4, 15);
    return 0;
}
