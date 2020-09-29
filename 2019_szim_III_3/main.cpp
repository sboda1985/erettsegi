#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.txt");
    int n,x, i=0, j;
    in >> n;
    int max_paros = -1;
    int max_paratlan = -1;

   for(i=0; i<n; i++){
       in >> x;
       if (x % 2 == 0) {
           if (x > max_paros) {
               max_paros = x;
           }
       }

       if (x % 2 != 0) {
           if (x > max_paratlan){
               max_paratlan = x;
           }
       }
   }

   int min_paros = 99999999;
   int min_paratlan = 999999999;

   for(i=0; i<n; i++){
       in >> x;
       if (x % 2 == 0) {
           if (x < min_paros) {
               min_paros = x;
           }
       }

       if (x % 2 != 0) {
           if (x < min_paratlan) {
               min_paratlan = x;
           }
       }
   }

    if (min_paratlan > max_paros && min_paros > max_paratlan) {
        cout << "DA";
    } else {
        cout << "NU";
    }

    cout << endl;
    return 0;
}
