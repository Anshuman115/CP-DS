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
        int lowers = 0;
        int uppers = 0;
        for (int j = 0; j < s.length(); j++)
        {
            /* code */
            int c = s[j];
            if (islower(c))
            {
                /* code */
                lowers = lowers + 1;
            }
            else if (isupper(c))
            {
                /* code */
                uppers = uppers + 1;
            }
        }
        if (uppers > lowers)
        {
            for (int j = 0; j < s.length(); j++)
            {
                int c = s[j];
                if (islower(c))
                    s[j] = toupper(c);
            }
        }
        else if (uppers < lowers)
        {
            /* code */
            for (int j = 0; j < s.length(); j++)
            {
                int c = s[j];
                if (isupper(c))
                    s[j] = tolower(c);
            }
        }
        else
        {
            /* code */
            for (int j = 0; j < s.length(); j++)
            {
                int c = s[j];
                if (isupper(c))
                    s[j] = tolower(c);
            }
        }
        cout << s << endl;
    }

    return 0;
}