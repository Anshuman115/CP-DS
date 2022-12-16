#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        if (x != a && x != b && y != a && y != b)
        {
            /* code */
            cout << 2 << endl;
        }
        else if (x == a || x == b)
        {
            if (y == a || y == b)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
        else if (y == a || y == b)
        {
            if (x == a || x == b)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
    }
    return 0;
}