#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> a[i];
        }
        int b[n];
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = 0; j < i + 1; j++)
            {
                /* code */
                sum = sum + a[j];
            }
            b[i] = sum;
        }
        sort(b, b + n);
        if (b[0] <= 0)
        {
            /* code */
            int req = abs(b[0]) + 1;
            cout << req << endl;
        }
        else
        {
            /* code */
            cout << 0 << endl;
        }
    }
    return 0;
}