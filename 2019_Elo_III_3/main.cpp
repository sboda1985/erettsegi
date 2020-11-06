#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, x, y, z;
    cout <<"n=";
    cin >> n;
    cout << "x=";
    cin >> x;
    cout << "y=";
    cin >> y;
    cout << "z=";
    cin >> z;
    ofstream off("bac.txt");
    for(int i=n; i>4; i--){
        int S = 0;
        if (i%2==0){

            S+=((i/2)-1)*z;
            S+=y;
            S-=((i/2)-1)*x;
        } else {
            S+=i/2*z;
            S-=(i/2-1)*x;
        }
        off << S << " ";

    }
        off << z+y-x << " ";
    off << z << " " << y << " " << x;
    return 0;
}
