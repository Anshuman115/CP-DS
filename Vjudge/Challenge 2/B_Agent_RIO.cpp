#include <bits/stdc++.h>
using namespace std;

int main()
{
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
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            k = 10 * k + a[i];
        }
        int m = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            m = 10 * m + a[i];
        }
        string s = to_string(k + m);
        for (int i = 0; i < s.length(); i++)
        {
            /* code */
            if (i < s.length() - 1)
            {
                /* code */
                cout << s[i] << " ";
            }
            else
            {
                /* code */
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}