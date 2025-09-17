#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.in");
    int studentStart, studentEnd, activityStart, activityEnd;
    in >> studentStart >> studentEnd;
    int lastActivity = 0, activityCount = 0, nr = 0;
    while(in >> activityStart)
    {
        in >> activityEnd;
        nr ++;
        if ((activityEnd >= studentStart + 1 &&
                activityStart <= studentStart) ||
            (activityStart <= studentEnd - 1 &&
             activityEnd >= studentEnd))
        {
            activityCount++;
            lastActivity = nr;
        }
    }
    cout << activityCount << " "  << lastActivity;
    return 0;
}
