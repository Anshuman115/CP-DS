#include <bits/stdc++.h>
using namespace std;

int main()
{
    //0 west,2 east,1 north,3 south
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        /* code */
        int dir = 1;
        int a;
        cin >> a;
        dir = dir + a;
        if (dir % 4 == 1)
        {
            cout << "North" << endl;
        }
        else if (dir % 4 == 0)
        {
            cout << "West" << endl;
        }
        else if (dir % 4 == 2)
        {
            cout << "East" << endl;
        }
        else if (dir % 4 == 3)
        {
            cout << "South" << endl;
        }
    }

    return 0;
}