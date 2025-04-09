#include <iostream>

using namespace std;

int majImp(int a, int b){
   for(int szam = a; szam <= b; szam++){
       int paros = 0, paratlan = 0;
       for(int oszto = 2; oszto<szam; oszto++){
           if (szam % oszto == 0){
               if (oszto %2 == 0){
                   paros += oszto;
               } else {
                   paratlan += oszto;
               }
           }
       }
       if (paratlan > paros){
           return szam;
       }
   }
   return 0;
}

int main()
{
    cout << majImp(16, 30) << endl;
    return 0;
}
