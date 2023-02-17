#include <iostream>

using namespace std;

int main()
{
    int a, b, l, k, x, pm, y, i, p;
  cout << "a=";
  cin >> a;
  cout << "b=";
  cin >> b;
  cout << "k=";
  cin >> k;
 pm=0;
 y=0; i=b;
while(i>=a){
x=i; p=0;
while(x%k==0) {

x=x/k; p=p+1;
}
if (p!=0 && (p<pm || pm==0)){
 pm=p; y=i;
}
 i=i-1;

}
 cout << y;

    return 0;
}
