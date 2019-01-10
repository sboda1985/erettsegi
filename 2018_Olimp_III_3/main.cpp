#include <iostream>

using namespace std;
int echilibrat(int n)
{
    int parosszamjegy,  paratlanszamjegy, parosS=0, paratlanS=0;
    while (n > 0)
    {
        parosszamjegy = n%10;
        n = n/10;
        paratlanszamjegy = n%10;
        n = n / 10;
        parosS += parosszamjegy;
        paratlanS += paratlanszamjegy;
    }
    if ((parosS%2 == 0) && (paratlanS%2 == 1))
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
int main()
{
    cout << echilibrat(11211) << endl;
    cout << echilibrat(25163912);
        return 0;
}
