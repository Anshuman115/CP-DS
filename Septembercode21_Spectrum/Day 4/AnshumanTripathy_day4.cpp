#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    // int players[t];
    for (int i = 0; i < t; i++)
    {
        /* code */
        int a;
        cin >> a;
        if (a > 33 && a % 5 == 0)
        {
            /* code */
            cout << a << endl;
        }
        else if (a > 33 && a % 5 != 5)
        {
            /* code */
            int mul5 = a / 5;
            int diff = a - (5 * (mul5 + 1));
            if (abs(diff) < 3)
            {
                /* code */
                cout << 5 * (mul5 + 1) << endl;
            }
            else
            {
                cout << a << endl;
            }
        }

        else
        {
            cout << a << endl;
        }
    }

    return 0;
}