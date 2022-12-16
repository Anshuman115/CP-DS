#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        /* code */
        int n;
        string s;
        cin >> n;
        int count1 = 0;
        int count0 = 0;
        cin >> s;
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            /* code */
            if (s[j] == '1')
            {
                /* code */
                count1 = count1 + 1;
            }
            else
            {
                count1 = 0;
            }
            if (s[j] == '0')
            {
                /* code */
                count0 = count0 + 1;
            }
            else
            {
                count0 = 0;
            }
            if (count1 == 6 || count0 == 6)
            {
                /* code */
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}