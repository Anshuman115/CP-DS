#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n, m;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int max = 0;
        // cout << (3 - (abs(-10) % 3)) << endl;
        for (int i = 0; i < n; i++)
        {
            /* code */
            int mod = (abs(arr[i] - arr[n - 1]) % m);
            // cout << mod << endl;
            if (mod > 0)
            {
                /* code */
                mod = m - mod;
            }
            // cout << mod << endl;
            int a = arr[i] + arr[n - 1] + mod;
            if (a > max)
            {
                /* code */
                max = a;
            }
        }
        cout << max << endl;
    }

    return 0;
}