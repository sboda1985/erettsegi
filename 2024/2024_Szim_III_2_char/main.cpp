#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n;
    cin >> n;

    char szavak[n][101]; // Assuming max word length is 100
    for (int i = 0; i < n; i++) {
        cin >> szavak[i];
    }


    cin.ignore();
    char sor[101]; // Assuming max sentence length is 1000
    cout << "kerem a mondatot\n";
    cin.getline(sor, 100);

    int sor_len = strlen(sor);
    sor[sor_len] = ' ';
    sor_len++;

    char prevkarakter = ' ';
    int nr = 0;
    char sor2[1001] = "";
    int sor2_index = 0;
    bool imposibil = false;

    for (int i = 0; i < sor_len; i++) {
        if (sor[i] == '*') {
            nr++;
        }
        if (sor[i] == ' ') {
            if (prevkarakter == '*') {
                imposibil = true;
                for (int j = 0; j < n; j++) {
                    if (strlen(szavak[j]) == nr) {
                        for (int k = 0; szavak[j][k] != '\0'; k++) {
                            sor2[sor2_index++] = szavak[j][k];
                        }
                        imposibil = false;
                        break;
                    }
                }
            }
            nr = 0;
        }
        if (sor[i] != '*') {
            sor2[sor2_index++] = sor[i];
        }
        prevkarakter = sor[i];
    }
    sor2[sor2_index] = '\0'; // Null terminate sor2

    if (!imposibil) {
        cout << sor2;
    } else {
        cout << "imposibil";
    }

    return 0;
}
