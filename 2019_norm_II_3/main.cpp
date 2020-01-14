#include <iostream>

using namespace std;

struct punct
{ float x,y;
};
struct cerc
{ struct punct centru;
 float raza;
}fig;
int main()
{
    fig.centru.x = 0;
    fig.centru.y = 0;
    fig.raza = 1;
    return 0;
}
