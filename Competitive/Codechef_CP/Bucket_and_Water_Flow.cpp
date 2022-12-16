#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        int s = w + (y * (z));
        if (s > x)
        {
            /* code */
            cout << "overflow" << endl;
        }
        else if (s < x)
        {
            /* code */
            cout << "unfilled" << endl;
        }
        else
        {
            /* code */
            cout << "filled" << endl;
        }
    }

    return 0;
}