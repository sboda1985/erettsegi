#include <iostream>

using namespace std;

int main()
{
    int n, b=0;
    cout << "n=";
    cin >> n;
    for(int i = 1; i < 2*n; i++)
    {
        b = 0;
        int j;
        if (n-i < 0)
        {
            j = i-n;
        }
        else
        {
            j = n - i;
        }
        while (j>=0)
        {
            cout << "*";
            j--;
            b = 1;
        }
        if (b != 0)
        {
            cout << endl;
        }
    }
    return 0;
}
