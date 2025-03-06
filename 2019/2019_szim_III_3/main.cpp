#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.txt");
    int n,x, i=0, j, elsoParos = 0, elsoParatlan = 0, masodikParos = 0, masodikParatlan = 0;
    in >> n;
    int maxParos = -1, maxParatlan = -1;
    int minParos = 99999999, minParatlan = 999999999;
   for(i=0; i<n; i++){
       in >> x;
       if (x % 2 == 0) {
           elsoParos++;
           if (x > maxParos) {
               maxParos = x;
           }
       }

       if (x % 2 != 0) {
           elsoParatlan++;
           if (x > maxParatlan){
               maxParatlan = x;
           }
       }
   }

   for(i=0; i<n; i++){
       in >> x;
       if (x % 2 == 0) {
           masodikParos++;
           if (x < minParos) {
               minParos = x;
           }
       }

       if (x % 2 != 0) {
           masodikParatlan++;
           if (x < minParatlan) {
               minParatlan = x;
           }
       }
   }
    bool paritar = false;
    if (minParatlan > maxParos && minParos > maxParatlan) {
        paritar = true;
    }
    if (elsoParatlan == 0 || elsoParatlan == n) {
        if (elsoParatlan == masodikParatlan){
            paritar = true;
        }
    }

    if (paritar) {
        cout << "DA";
    } else {
        cout << "NU";
    }
    return 0;
}
