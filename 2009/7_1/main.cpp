#include <iostream>
#include <string>

using namespace std;

int main()

{

    string s1, s2;

    cout << "kerem a beolvasando stringet ";

    getline(cin, s1);

    //cout << "Kerem a keresendo stringet";

    //cin >> s2;

    int elofordul = 0;

    size_t hely;

    //megkeresi az elso helyet, ahol az s2 string elofordul

    hely = s1.find('a');
    //ciklusosan ismeteljuk a fenti utasitasokat, vigyazva arra, hogy mindig

    //az elozo hely utan talalt helyen keressuk a keresendo stringet

    while(hely!=string::npos)
    {
        s1.replace(hely, 1, "A");
        hely= s1.find('a', hely+1);
    }
    cout << s1 << endl;
    return 0;

}
