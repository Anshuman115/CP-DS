#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        /* code */
        string s;
        cin >> s;
        int count = 0;
        for (int j = 0; j < s.length(); j++)
        {
            /* code */
            if (s[j] == s[j + 1])
            {
                /* code */
                count = count + 1;
            }
        }
        cout << count << endl;
    }

    return 0;
}