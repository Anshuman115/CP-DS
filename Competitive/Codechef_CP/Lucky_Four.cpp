#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        /* code */
        int a;
        int n = 0;
        stringstream ss;
        string s;
        cin >> a;
        ss << a;
        ss >> s;
        for (int j = 0; j < s.size(); j++)
        {
            /* code */
            if (s[j] == '4')
            {
                /* code */
                n = n + 1;
            }
        }
        cout << n << endl;
    }
    return 0;
}