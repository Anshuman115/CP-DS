#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s[i] == ',')
        {
            /* code */
            cout << endl;
        }
        else
        {
            cout << s[i];
        }
    }

    return 0;
}