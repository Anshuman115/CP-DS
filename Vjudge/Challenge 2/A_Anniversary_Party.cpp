#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n, d;
        cin >> n >> d;
        int b[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> b[i];
        }
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            total = total + b[i];
        }
        if (total > d)
        {
            /* code */
            cout << "YES" << endl;
        }
        else
        {
            /* code */
            cout << "NO" << endl;
        }
    }

    return 0;
}