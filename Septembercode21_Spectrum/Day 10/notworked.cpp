#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 1;
    // cin >> n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        string s = "kuku";
        // cin >> s;
        vector<char> alphabets;
        vector<char>::iterator it;
        for (int k = 97; k < 123; k++)
        {
            /* code */
            int a = k;
            char b = a;
            // cout << b;
            alphabets.push_back(b);
        }
        // for (int l = 0; l < 26; l++)
        // {
        //     /* code */
        //     cout << alphabets[l];
        // }
        // cout << endl;

        for (int j = 0; j < s.length(); j++)
        {
            /* code */
            char c = s[j];
            int d = c;
            // if (d >= 97 && d <= 122)
            // {
            //     /* code */
            //     if (find(alphabets.begin(), alphabets.end(), s[j]) != alphabets.end())
            //     {
            //         /* code */
            //         it = alphabets.begin();
            //         // advance(it, c - 97);
            //         alphabets.erase(it + d - 97);
            //         // alphabets.pop_back();
            //         cout << "true" << endl;
            //     }
            // }
            if (find(alphabets.begin(), alphabets.end(), c) != alphabets.end())
            {
                /* code */
                it = alphabets.begin();
                // advance(it, c - 97);
                alphabets.erase(it + d - 97);
                // alphabets.pop_back();
                cout << "true" << endl;
            }
        }
        cout << alphabets.size();
        // for (auto it = alphabets.begin(); it != alphabets.end(); ++it)
        // {
        //     /* code */
        //     cout << *it;
        // }
        // if (alphabets.empty())
        // {
        //     cout << "PASS" << endl;
        // }
        // else
        // {
        //     cout << "FAIL" << endl;
        // }
        alphabets.clear();
    }

    return 0;
}