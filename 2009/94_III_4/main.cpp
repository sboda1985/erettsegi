#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "a=";
    cin >> a;
    int b = a;
    int v[10] = {0};
    int max = 0;
    int i = 0;
    while (a>0){
        int c = a % 10;
        a = a /10;
        v[i] = c;
        i++ ;
        if (c> max) {
            max = c;
        } else {
            break;
        }

    }
    a= a*10 + max;
    int n = i;
    for(int i =0; i< n;i++){
        for(int j = i+1; j< n; j++){
            if (v[i]> v[j]) {
                swap(v[i], v[j]);
            }
        }
    }
    for(int i =0; i< n-1;i++){
        a = a * 10 + v[i];
    }

    cout << "a" << a;
    return 0;
}
