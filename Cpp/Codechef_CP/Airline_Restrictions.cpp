#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        /* code */
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        if (a + b <= d && c <= e || a + c <= d && b <= e || c + b <= d && a <= e)
        {
            /* code */
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}