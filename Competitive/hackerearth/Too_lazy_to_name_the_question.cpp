#include <bits/stdc++.h>
using namespace std;

int lcm(int m, int n)
{
    int lc;
    for (int i = 1; i <= m * n; i++)
    {
        /* code */
        if (i % m == 0 && i % n == 0)
        {
            /* code */
            lc = i;
            break;
        }
    }
    return lc;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int cnum;
    for (int i = 1; c > 0; i++)
    {
        /* code */

        if (i % a == 0 || i % b == 0)
        {
            /* code */
            c--;
            cnum = i;
        }
    }
    int step;
    if (cnum % a == 0 && cnum % b == 0)
    {
        /* code */

        step = lcm(a, b);
    }
    else if (cnum % b == 0)
    {
        /* code */
        step = b;
    }
    else
    {
        /* code */
        step = a;
    }

    for (int i = cnum; i >= 0; i = i - step)
    {
        /* code */
        cout << i << " ";
    }

    return 0;
}