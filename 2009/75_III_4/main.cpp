#include <iostream>

using namespace std;

int hatv(int a, int b){
    if(a%10==0)return 0;
    if(a%10==1)return 1;
    if(b==0)return 1;
    if(b==1)return a%10;
    if(a%10==2){
        if(b>=4) b=b%4;
        if(b==1) return 2;
        if(b==2) return 4;
        if(b==3) return 8;
        if(b==0) return 6;
    }
    if(a%10==3){
        if(b>=4) b=b%4;
        if(b==1) return 3;
        if(b==2) return 9;
        if(b==3) return 7;
        if(b==0) return 1;
    }
    if(a%10==4){
        if(b>=2) b=b%2;
        if(b==1) return 4;
        if(b==0) return 6;
    }
    if(a%10==5) return 5;
    if(a%10==6) return 6;
    if(a%10==7){
        if(b>=4) b=b%4;
        if(b==1) return 7;
        if(b==2) return 9;
        if(b==3) return 3;
        if(b==0) return 1;
    }
    if(a%10==8){
        if(b>=4) b=b%4;
        if(b==1) return 8;
        if(b==2) return 4;
        if(b==3) return 2;
        if(b==0) return 6;
    }
    if(a%10==9){
        if(b>=2) b=b%2;
        if(b==1)return 9;
        if(b==0)return 1;
    }
}

int main()
{
    int a,b;
    cout <<"a=";
    cin >> a;
    cout <<"b=";
    cin >> b;
    cout << hatv(a,b);
    return 0;
}
