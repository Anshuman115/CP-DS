#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long x;
        cin >> n >> x;
        long long s[n];
        long long r[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> s[i] >> r[i];
        }
        sort(s, s + n);
        sort(r, r + n);
        int m;
        long long maxm;
        m = n - 1;
        for (int i = 0; i < n; i++)
        {
            /* code */

            maxm = r[m];
            if (s[m] > x)
            {
                /* code */
                m = m - 1;
            }
            else
            {
                /* code */
                cout << r[m] << endl;
                break;
            }
        }
    }
    return 0;
}