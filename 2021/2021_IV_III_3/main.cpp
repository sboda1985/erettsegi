#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in1("bac1.txt");
    ifstream in2("bac2.txt");
    int n1, n2, x1=1, x2=2;
    in1 >> n1;
    in2 >> n2;
    int i = 0;
    int j = 0;
    while(i < n1 && j < n2)
    {
        while(x1 % 5 != 0 && i < n1)
        {
            in1 >> x1;
            i++;
        }
        while(x2 %5 != 0 && j < n2)
        {
            in2 >> x2;
            j++;
        }
        if(x1!=x2 && i < n1 && j < n2)
        {
            if(x1 > x2)
            {
                cout << x2 <<" " ;
                in2 >> x2;
            }
            else
            {
                cout << x1 <<" ";
                in1 >> x1;
            }
        }
        if (x1 == x2)
        {
            in2 >> x2;
            in1 >> x1;
            i++;
            j++;
        }
    }
    if (x1%5 == 0)
    {
        if (x1!=x2)
        {
            cout << x1 << " ";
        }
    }
    if (x2%5 == 0)
    {
        if (x2!=x1)
        {
            cout << x2 << " ";
        }
    }
    for(int k = i; k <n1; k++)
    {
        in1 >> x1;
        if (x1%5 == 0)
        {
            if (x1!=x2)
            {
                cout << x1 << " ";
            }
        }
    }
    for(int k = j; k<n2; k++)
    {
        in2 >> x2;
        if (x2%5 == 0)
        {
            if (x1!=x2)
            {
                cout << x2 << " ";
            }
        }
    }
    return 0;
}
