#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("BAC.TXT");
    int n;
    in>> n;
    int a[n];
    int b[n];
    for(int i=0; i<n; i++){
        in >> a[i];
        in >> b[i];
    }
    for(int i=0; i<n; i++){
            bool nemmetszi = true;
            for(int j=0; j<n; j++){
                    if (i!=j) {
                        if (a[i] >= a[j] && a[i] <= b[j]) {
                            nemmetszi = false;
                        }
                        if (b[i] >=a[j] && b[i] <= b[j]) {
                            nemmetszi = false;
                        }

                        if (a[i] <= a[j] && b[i] >= b[j]) {
                            nemmetszi = false;
                        }

                    }
            }
            if (nemmetszi) {
                cout << a[i] << " " << b[i] << endl;

            }
    }


    return 0;
}
