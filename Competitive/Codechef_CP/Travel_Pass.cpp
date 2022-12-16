#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        /* code */
        int n, a, b;
        int mint = 0;
        cin >> n >> a >> b;
        cin.ignore();
        string s;
        cin >> s;
        // cout << a << " " << b << " " << n << " " << s << endl;
        for (int j = 0; j < n; j++)
        {
            /* code */
            if (s[j] == '1')
            {
                /* code */
                mint = mint + b;
            }
            else if (s[j] == '0')
            {
                /* code */
                mint = mint + a;
            }
        }
        cout << mint << endl;
    }

    return 0;
}