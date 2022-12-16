#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int x;
        cin >> x;
        int ans;
        if (x % 5 == 0)
        {
            /* code */
            // int y = x / 10;
            // int z = x % 10;
            // int k = z / 5;
            // ans = y + k;
            // cout << ans << endl;
            cout << (x + 5) / 10 << endl;
            //easiest solution ever.DAMN
        }
        else
        {
            /* code */
            ans = -1;
            cout << ans << endl;
        }
    }

    return 0;
}