#include <iostream>

using namespace std;

int moderat(int n){
   int primek[n];
   for(int i = 2; i<n; i++){
       primek[i] = i;
   }
   for(int i =2; i<n; i++){
       if (primek[i] == i){
           for(int j=2; j*i<=n; j++){
               primek[j*i] = 0;
           }
       }
   }
   int prev = primek[2];
   for(int i=3; i<n; i++){
       if(primek[i] > 0){
           if (prev * primek[i] == n){
            return 1;
           }
           prev = primek[i];
       }
   }
   return 0;
}

int main()
{
    cout << moderat(35) << endl;
    cout << moderat(18) << endl;
    cout << moderat(55) << endl;
    cout << moderat(4) << endl;
    return 0;
}
